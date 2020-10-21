# A Man Walking In Rain
# Code

```C
#include<stdio.h>
#include<graphics.h>
  
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.75

int ldisp = 0;

 
void DrawManAndUmbrella (int x, int ldisp) 
{
  
//head
circle (x, GroundY - 90, 10);
  
line (x, GroundY - 80, x, GroundY - 30);
  
//hand
line (x, GroundY - 70, x + 10, GroundY - 60);
  
line (x, GroundY - 65, x + 10, GroundY - 55);
  
line (x + 10, GroundY - 60, x + 20, GroundY - 70);
  
line (x + 10, GroundY - 55, x + 20, GroundY - 70);
  
//legs
line (x, GroundY - 30, x + ldisp, GroundY);
  
line (x, GroundY - 30, x - ldisp, GroundY);
  
//umbrella
pieslice (x + 20, GroundY - 120, 0, 180, 40);
  
line (x + 20, GroundY - 120, x + 20, GroundY - 70);

} 
 
void Rain (int x) 
{
  
int i, rx, ry;
  
for (i = 0; i < 400; i++)
    
    {
      
rx = rand () % ScreenWidth;
      
ry = rand () % ScreenHeight;
      
if (ry < GroundY - 4)
	
	{
	  
if (ry < GroundY - 120 || (ry > GroundY - 120 && (rx < x - 20 || rx > x + 60)))
	    line (rx, ry, rx + 0.5, ry + 4);
	
}
    
}

}


void main () 
{
  
int gd = DETECT, gm, x = 0;
  
    //Change BGI directory according to yours
    initgraph (&gd, &gm, "C:\\TurboC3\\BGI");
  
while (!kbhit ())
    
    {
      
	//Draw Ground
	line (0, GroundY, ScreenWidth, GroundY);
      
Rain (x);
      
ldisp = (ldisp + 2) % 20;
      
DrawManAndUmbrella (x, ldisp);
      
delay (75);
      
cleardevice ();
      
x = (x + 2) % ScreenWidth;
    
}
  
getch ();

}
```
## Output
![Man_Walking_in_rain](https://github.com/Manikant25/cool_code_snippets/blob/master/snippets/c/Man_Walking_In_Rain/20201021_151821.gif)




## Contributed By
|Name|Github Username|College Name|
|---|---|---|
|Manikant Rai|Manikant25|SRM Institute of Science and Technology|


