#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 putpixel(300,300,WHITE);
 getch();
}