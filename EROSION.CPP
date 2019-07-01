
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
   int a[4],m=15,x1,x2,y1,y2;
   /* draw the circle */

  //  fillellipse(200,200,30,30);
  //  setcolor(1);
   /*
    for(int p=0;p<10;p++)
    {
    x1=rand()%100;
    x2=rand()%100;
    y1=rand()%100;
    y2=rand()%100;
    line(x1,y1,x2,y2);
    }
    */
      fillellipse(100,200,20,90);
      fillellipse(100,310,20,18);


    for(int i=0; i<=350; i++)
    {
    for(int j=0; j<=500; j++)
    {


      a[0]=getpixel(i,j);
      a[1]=getpixel(i+1,j);
      a[2]=getpixel(i,j+1);
      a[3]=getpixel(i+1,j+1);
      for(int k=0;k<=3;k++)
      { if(m>a[k])
      m=a[k];
      }
      if(m==0)
      putpixel(i+140,j,0);
      else
      putpixel(i+140,j,15);

      m=15;
    /* if(getpixel(i,j)<getpixel(i,j+1))
     {
      putpixel(250+i,j,15);
     }
     else
     {
     putpixel(250+i,j,0) ;
     }
    */
    }
}
   /* clean up */
   getch();
   closegraph();
   return 0;
}
