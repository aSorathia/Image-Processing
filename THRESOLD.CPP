
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
   int k=80,l=60,i=120,j=120;
   int t=6;                 //this is threshold value

   for(int p=0;p<=10;p++)
   {
   for(int q=0;q<=3;q++)
   {
   setcolor(rand()%15);
   rectangle(k--,l--,70+i++,70+j++);
   }
   }


   for(i=0;i<=getmaxx();i++)
   {
   for(j=0;j<=getmaxy();j++)
   {
   if(getpixel(i,j)>=t)
   {putpixel(i,240+j,15);
   }
   }
   }


   /* clean up */
   getch();
   closegraph();
   return 0;
}

