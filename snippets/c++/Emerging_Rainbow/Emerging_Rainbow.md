# Emerging Rainbow
This code is about making a rainbow emerge from time=0 seconds.
#### Langauge
C++
#### Type of Issue
Feature 
#### Code
```C++
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
using namespace std;
int main()
{
    int gdriver = DETECT,gmode;
    int x,y,i;

	initgraph(&gdriver,&gmode,"C:\\TC\\BIN");
	x=getmaxx()/2;
	y=getmaxy()/2;

	for(i=30;i<200;i++)
	{
		delay(100);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
return 0;
}
```
#### Output
![Rainbow Image](https://github.com/einhawking/cool_code_snippets/blob/master/snippets/c%2B%2B/Emerging_Rainbow/Rainbow_image.PNG)
#### Contributed By
|Name|Github Username|College Name|
|---|---|---|
|Shreya Garg|einhawking|Maharaja Agrasen Institute of Technology|
