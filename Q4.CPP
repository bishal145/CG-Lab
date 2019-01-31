#include<conio.h>
#include<stdio.h>
#include<graphics.h>
int main()
{
	clrscr();
	int x,y;
	int gd=0,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	//head
	circle(300,60,40);
	//neck
	rectangle(290,100,310,130);
	//body
	rectangle(220,130,380,300);
	//left arm
	line(220,130,130,220);
	line(220,140,128,227);
	//left leg
	line(240,300,240,390);
	line(260,300,260,410);
	line(200,410,260,410);
	line(200,390,240,390);
	line(200,390,200,410);
	arc(200,394,90,270,3);
	arc(200,401,90,270,3);
	arc(200,407,90,270,3);
	//right leg
	line(340,300,340,410);
	line(360,300,360,390);
	line(340,410,400,410);
	line(360,390,400,390);
	line(400,390,400,410);
	arc(400,394,270,90,3);
	arc(400,401,270,90,3);
	arc(400,407,270,90,3);
	getch();
	return 0;
}
