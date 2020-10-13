# Making Harry Potter Invisible Cloak Effect


## CODE

### Background Picture Capturing
```python

import cv2
# THIS IS MY WEBCAM
cap = cv2.VideoCapture(0)

while cap.isOpened():
    ret, back = cap.read() # SIMPLY READING FROM MY WEBCAM
    if ret:
        # back is what the camera is reading
        cv2.imshow("image", back)
        if cv2.waitKey(5) == ord('q'):
            # save the image
            cv2.imwrite('image.jpg', back)
            break

cap.release()
cv2.destroyAllWindows()

```

### Cloak Effect
```python
import cv2
import numpy as np

cap = cv2.VideoCapture(0)
back = cv2.imread('./image.jpg')

while cap.isOpened():
    # take each frame
    ret, frame = cap.read()
    
    if ret:
        
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
        
        red = np.uint8([[[0,0,255]]]) # bgr value of red
        hsv_red = cv2.cvtColor(red, cv2.COLOR_BGR2HSV)
        
        
        # threshold the hsv value to get only red colors
        l_red = np.array([0, 100, 100])
        u_red = np.array([10, 255, 255])
        
        mask = cv2.inRange(hsv, l_red, u_red)
        
        
        # all things red
        part1 = cv2.bitwise_and(back, back, mask=mask)
        
        
        mask = cv2.bitwise_not(mask)
        
        # part 2 is all things not red
        part2 = cv2.bitwise_and(frame, frame, mask=mask)
        
        
        cv2.imshow("cloak", part1 + part2)
        
        if cv2.waitKey(5) == ord('q'):
            break

cap.release()
cv2.destroyAllWindows()
```

### DESCRIPTION/WORKING
 
 (background)
- First a background image will be clicked which will be used for masking and saved
 
 (cloak effect)
- HSV upper limit and lower limit is set for the colour to be masked(eg: (0,100,100) - (10,255,255) for red)
- part-1 is for replacing red colour pixels with background image pixels
- part-2 is for rest non-red pixels to show 
- Adding both (numpy) we will get the cloaking effect 

### OUTPUT
<img src ="https://user-images.githubusercontent.com/53532851/94545152-ce3f2b00-0269-11eb-8d8d-efd0fa0bbdf4.gif">


## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Shitiz Aggarwal | SHITIZ-AGGARWAL | Maharaja Agrasen Institute of Technology |

