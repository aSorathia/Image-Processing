
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
   int count=0,k,i,j;
   rectangle(80,60,150,100);
 //  fillellipse(125,80,20,30);
   printf("\n\n\n\n\n\n\n\n\n\n the run length code for this image will be:\n");

   for(i=50;i<199;i++)
   {
   for(j=30;j<129;j++)
   {

   if(getpixel(i,j)==getpixel(i,j+1))
    ++count;
    else
    {
    count++;
    printf("%d %d ,",getpixel(i,j),count);
    count=0;
    }
   }



}


   /* clean up */
   getch();
//   closegraph();
   return 0;
}

