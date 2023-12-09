#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
class figure
{
float length,delx,dely;
int d,h,xc,yc;
public:
void drawline(float x1,float y1,float x2,float y2)
{
float x,y;
if(abs(x2-x1)>=abs(y2-y1))
{
	
	
	//dx=6, dy=5
	length=abs(x2-x1);
}
else
{
	length=abs(y2-y1);
}


delx=(x2-x1)/length;  // length=5
dely=(y2-y1)/length;

x=x1+0.5; //x1=2   x=2+0.5=2.5
y=y1+0.5;

putpixel(floor(x),floor(y),WHITE);

int i=1;
while(i<=length) //i=5
//i=1, i=2/.. i=5... i=6
{
x=x+delx;
y=y+dely;
i=i+1;
putpixel(floor(x),floor(y),WHITE);
}  //end while loop

} // end ddaline
void drawcircle(int r,int xc,int yc)//Bresenham circle
{
int x,y;    //x=3 y=4
d=3-2*r;
x=0;
y=r;//r=3 y=3 x=0
do
{
putpixel(x+xc,y+yc,WHITE); //symmentry approach
putpixel(y+xc,x+yc,WHITE);
putpixel(y+xc,-x+yc,WHITE);
putpixel(x+xc,-y+yc,WHITE);
putpixel(-x+xc,-y+yc,WHITE);
putpixel(-y+xc,-x+yc,WHITE);
putpixel(-y+xc,x+yc,WHITE);
putpixel(-x+xc,y+yc,WHITE);
if(d<0)
{
d=d+4*x+6;
x=x+1;
}
else 
{
d=d+4*(x-y)+10;
y=y-1;
x=x+1;
}
}while(x<=y); //x=3 y=4
}// end of circle algorithm

void fig(float x11,float y11,float length)
{
h=((sqrt(3))*length)/2;
drawline(x11,y11,x11+length,y11);
drawline(x11+length,y11,x11+(length)/2,y11-h);
drawline(x11,y11,x11+(length)/2,y11-h);
drawcircle(h/3,x11+(length)/2,y11-(h/3));
drawcircle(2*h/3,x11+(length)/2,y11-(h/3));
}

};

int main()
{

figure f1;
float x1,y1,length;
cout<<"enter the coordinates="<<endl;
cin>>x1>>y1;
cout<<"enter the length"<<endl;
cin>>length;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
f1.fig(x1,y1,length);//calling 
getch();
closegraph();
return 0;
}


