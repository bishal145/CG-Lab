 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>

 void ellipse(int xc,int yc,int rx,int ry)
 {
   int gm=DETECT,gd;
   int x, y, p1, p2;
   clrscr();
   initgraph(&gm,&gd,"C:\\TURBOC3\\BGI");
   x=0;
   y=ry;
   p1=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);

   int dx = 2 * ry * ry * x;
   int dy = 2 * rx * rx * y;

   while(dx<dy)
   {
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc-x,yc+y,WHITE);

	if(p1<0)
	{
		x = x + 1;
		dx = dx + (2 * ry * ry);
		p1 = p1 - dx + (ry * ry);
	}
	else
	{
		x = x + 1;
		y = y - 1;
		dx = dx + (2 * ry * ry);
		dy = dy - (2 * rx * rx);
		p1 = p1 + dx - dy + (ry * ry);
	}
   }

   p2 = ((rx * rx)/4) + (ry * ry) + (2 * rx * ry * ry);

   while(y>0)
   {
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc-x,yc+y,WHITE);


	if(p2>0)
	{       x = x;
		y = y - 1;
		dy = dy - (2 * rx * rx);
		p2 = p2 - dy + (rx * rx);
	}
	else
	{
		y=y-1;
		x=x+1;
		dx = dx + (2 * ry * ry);
		dy = dy - (2 * rx * rx);
		p2 = p2 + dx - dy + (rx * rx);
	}
   }
   getch();
   closegraph();
 }

 void main()
 {
   int xc,yc,rx,ry;
   clrscr();
   printf("Enter Xc=");
   scanf("%d",&xc);
   printf("Enter Yc=");
   scanf("%d",&yc);
   printf("Enter Rx=");
   scanf("%d",&rx);
   printf("Enter Ry=");
   scanf("%d",&ry);
   ellipse(xc,yc,rx,ry);
   getch();
 }