#include <graphics.h>
#include <stdio.h>
#include<conio.h>
#include <math.h>

void main( )
{
	clrscr();
	int x,y,x1,y1,x2,y2,dx,dy,len;
	int i,gd=DETECT,gm;

	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	printf("Enter the value of x1 and y1 : ");
	scanf(" %d %d",&x1,&y1);
	printf("Enter the value of x2 and y2: ");
	scanf("%d %d",&x2,&y2);

       //	dx=abs(x2-x1);
       //	dy=abs(y2-y1);

	if(abs(x2-x1)>=abs(y2-y1))
		len=abs(x2-x1);
	else
		len=abs(y2-y1);

	dx=(x2-x1)/len;
	dy=(y2-y1)/len;

	x = x1 + 0.5;
	y = y1 + 0.5;
	putpixel(x,y,5);

	i=1;
	while(i<=len)
	{
		x=x+dx;
		y=y+dy;
		putpixel(floor(x),floor(y),5);
		i=i+1;

	}
	getch();
      //	closegraph();
}