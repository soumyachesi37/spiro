#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()
{
 int x,y,d=35,r=50,x1,y1,cx=350,cy=225,size=200;
 double i,theta;

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 circle(cx,cy,size+2);

 for(i=0;i<2*3.14;i=i+0.01)
 {
  x=cx+(size-r)*cos(i);
  y=cy-(size-r)*sin(i);
  theta=(double)i*size/r;
  x1=x+d*cos(theta);
  y1=y+d*sin(theta);
  putpixel(x,y,WHITE);
  setcolor(WHITE);
  circle(x1,y1,2);
  circle(x,y,r);
  delay(10);
  putpixel(x,y,BLACK);
  setcolor(BLACK);
  circle(x1,y1,2);
  circle(x,y,r);
 }
 getch();
}