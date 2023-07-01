#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()
{
 int x,y,i,r=50,x1,y1,bottom=450,right=500;

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 line(0,bottom+1,right,bottom+1);

 for(i=r;i<(right-r);i++)
 {
  x=i;
  y=bottom-r;
  putpixel(x,y,WHITE);
  setcolor(WHITE);
  circle(x,y,r);
  delay(10);
  putpixel(x,y,BLACK);
  setcolor(BLACK);
  circle(x,y,r);
 }
 getch();
}