#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, ds,dt,d, x, y;

	dx=x1-x0;
	dy=y1-y0;

	x=x0;
	y=y0;

	dt=2*(dy-dx);
	ds=2*dy;
	d=2*dy-dx;

	putpixel(floor(x),floor(y),2);
	while(x<x1)
	{
		x=x+1;
		if(d<0)
		{
			d=d+ds;
		}
		else
		{
			y=y+1;
			d=d+dt;
		}
		putpixel(floor(x),floor(y),2);
	}
}

int main()
{
	clrscr();
	int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

	printf("Enter co-ordinates of first point: ");
	scanf("%d%d", &x0, &y0);

	printf("Enter co-ordinates of second point: ");
	scanf("%d%d", &x1, &y1);
	drawline(x0, y0, x1, y1);

	getch();
	return 0;
}