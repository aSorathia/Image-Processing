
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "..\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
   int x1,x2,y1,y2;
   /* draw the circle */

  //  fillellipse(200,200,30,30);
    setcolor(15);

    for(int p=0;p<10;p++)
    {
    x1=rand()%100;
    x2=rand()%100;
    y1=rand()%100;
    y2=rand()%100;
    line(x1,y1,x2,y2);
    }
       ellipse(200,200,0,360,20,90);



    for(int i=0; i<=getmaxx(); i++)
    {
    for(int j=0; j<=getmaxy(); j++)
    {
     if( ( (getpixel(i,j)==getpixel(i+1,j)) && (getpixel(i,j)==getpixel(i+2,j)) && (getpixel(i+2,j)!=0 )  )   )
     {
      putpixel(240+i,j,1);
     }

    }
}
   /* clean up */
   getch();
   closegraph();
   return 0;
}

