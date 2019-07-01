
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
   int k;
   /* draw the circle */

  //  fillellipse(200,200,30,30);
    setcolor(4);
    rectangle(30,30,70,70);
  bar3d(midx-50, midy-50, midx+50,midy+50, 10, 1);

   fillellipse(230,210,50,70);
    for(int i=0; i<=getmaxx(); i++)
    {
    for(int j=0; j<=getmaxy(); j++)
    {
     if((getpixel(i,j)!=getpixel(i+1,j))||(getpixel(i,j)!=getpixel(i,j+1)))
     { putpixel(240+i,j,1);
     }

    }
}
   /* clean up */
   getch();
   closegraph();
   return 0;
}

