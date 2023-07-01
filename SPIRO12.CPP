#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>

void spiro(int, int, int, int);

void main()
{
 int n,d,r,size=200,color;

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 randomize();
 for(n=1;n<10;n++)
 {
  r=10*random(20);
  d=random(200);
  do color=random(16); while(color==BLACK);
  spiro(d,r,size,color);
  delay(500);
  spiro(d,r,size,BLACK);
 }
 getch();
}

void spiro(int d, int r, int size, int color)
{
 int lcm=1,x,y,x1,y1,cx=350,cy=225;
 double i,rotation,theta;

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
  putpixel(x1,y1,color);
  delay(1);
 }
}