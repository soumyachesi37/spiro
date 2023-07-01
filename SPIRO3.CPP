#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()
{
 int x=300,y=300,i,r=50,x1,y1;

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 //putpixel(x,y,WHITE);

 for(i=0;i<360*4;i++)
 {
  x1=x+(r*cos(i*3.14/180/4));
  y1=y+(r*sin(i*3.14/180/4));
  putpixel(x1,y1,WHITE);
 }
 delay(1000);
 for(i=0;i<360*4;i++)
 {
  x1=x+(r*cos(i*3.14/180/4));
  y1=y+(r*sin(i*3.14/180/4));
  putpixel(x1,y1,BLACK);
 }
 getch();
}