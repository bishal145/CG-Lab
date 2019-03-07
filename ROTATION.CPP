#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

#define SIN(x) sin(x * 3.141592653589/180)
#define COS(x) cos(x * 3.141592653589/180)

void rotate(int x1,int y1,int x2,int y2,int angle)
{
    int x1d,x2d;
    int y1d,y2d;
    int gm = DETECT,gd;
    initgraph(&gm,&gd,"C:\\TURBOC3\\BGI");
    clrscr();
    line(x1,y1,x2,y2);

    x1d =  (x1 * COS(angle)) + (y1 * (SIN(angle)));
    x2d =  (x2 * COS(angle)) + (y2 * (SIN(angle)));
    y1d =  (x1 * SIN(angle)) + (y1 * (COS(angle)));
    y2d =  (x1 * SIN(angle)) + (y1 * (COS(angle)));

    line(floor(x1d),floor(y1d),floor(x2d),floor(y2d));

    getch();
    closegraph();
}

int main()
{
    int x1,x2,y1,y2,angle;
    clrscr();

    printf("Enter X1=");
    scanf("%d",&x1);

    printf("Enter X2=");
    scanf("%d",&x2);

    printf("Enter Y1=");
    scanf("%d",&y1);

    printf("Enter Y2=");
    scanf("%d",&y2);

    printf("Enter Angle=");
    scanf("%d",&angle);

    rotate(x1,y1,x2,y2,angle);

    getch();
    return 0;

}
