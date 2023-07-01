#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()
{
 int lcm=1,x,y,d=35,r=55,x1,y1,cx=350,cy=225,size=200;
 double i,rotation,theta;

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 while(lcm%size!=0||lcm%r!=0) lcm++;
 rotation=lcm/size*2*3.14;

 for(i=0;i<rotation;i=i+0.01)
 {
  x=cx+(size-r)*cos(i);
  y=cy-(size-r)*sin(i);
  theta=(double)i*size/r;
  x1=x+d*cos(theta);
  y1=y+d*sin(theta);
  setcolor(WHITE);
  putpixel(x1,y1,RED);
  delay(2);
  }
 getch();
}