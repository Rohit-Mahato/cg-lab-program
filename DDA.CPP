#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
drawline(float x1,float y1,float x2,float y2)
{
float dx,dy,step,i,x,y;
float xn,yn;
dx=(x2-x1);
dy=(y2-y1);
if(dx>dy)
{
step=dx;
}
else
{
step=dy;
}
xn=dx/step;
yn=dy/step;
x=x1;
y=y1;
i=0;
while(i<=step)
{
putpixel(x,y,WHITE);
x=xn+x;
y=yn+y;
i++;
}
return 0;
}
main()
{
delay(100);
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
drawline(100,100,500,100);
drawline(100,100,100,400);
drawline(100,400,500,400);
drawline(500,100,500,400);
drawline(100,250,300,400);
drawline(100,250,300,100);
drawline(300,400,500,250);
drawline(300,100,500,250);
circle(300,250,120);
getch();
closegraph();
return 0;
}
