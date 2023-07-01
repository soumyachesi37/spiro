#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()
{
 int x,y,i,r=50,x1,y1,bottom=450,right=900;

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 line(0,bottom,right,bottom);

 x=r;
 y=bottom-r;
 putpixel(x,y,WHITE);

 for(i=0;i<360*4;i++)
 {
  x1=x+(r*cos(i*3.14/180/4));
  y1=y+(r*sin(i*3.14/180/4));
  putpixel(x1,y1,WHITE);
 }
 delay(5000);
 for(i=0;i<360*4;i++)
 {
  x1=x+(r*cos(i*3.14/180/4));
  y1=y+(r*sin(i*3.14/180/4));
  putpixel(x1,y1,BLACK);
 }
 getch();
}