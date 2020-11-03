# Face Detection Using Opencv
## Code

```python
import cv2
cap = cv2.VideoCapture(0)
classifier = cv2.CascadeClassifier("haarcascade_frontalface_default.xml") # xml file is provided in the folder

while True:

    ret, frame = cap.read()
    if ret:
        faces = classifier.detectMultiScale(frame)

        for face in faces:
            x, y, w, h = face
            frame = cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 0, 255), 4)
        cv2.imshow("My window", frame)
    key = cv2.waitKey(1)

    if key == ord("q"):
        break

cap.release()
cv2.destroyAllWindows()
```

## Output
<img src ="https://user-images.githubusercontent.com/53532851/97967603-743f0180-1de3-11eb-81fc-77c391453d71.gif"/>

## Contributed By 

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Shitiz Aggarwal | SHITIZ-AGGARWAL | Maharaja Agrasen Institute of Technology |
