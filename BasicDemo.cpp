#include<graphics.h>   
  

int main() 
{ 

    int gd = DETECT, gm; 
   
    initgraph(&gd, &gm, ""); 
  
    setcolor(GREEN);

   rectangle(150, 150, 450, 450);
  //rectangle(150, 150, 250, 250);
   //rectangle(200, 500, 100, 100);   
 //  rectangle(650, 350, 450, 950);
    setcolor(BLUE);
    line(10,10, 75,150);
    circle(150,150, 50);
    putpixel(50,10,WHITE);
   
    
    getch();  
    closegraph(); 
    return 0; 
}

