#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void spiro(int, int, int);

void main()
{
 int d,r,size;

 clrscr();
 printf("Enter radius of big circle ");
 scanf("%d",&size);
 printf("Enter radius of small circle ");
 scanf("%d",&r);
 printf("Enter distance of dot from center ");
 scanf("%d",&d);
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 spiro(d,r,size);
 getch();
}

void spiro(int d, int r, int size)
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
  putpixel(x1,y1,RED);
  delay(2);
  }
}