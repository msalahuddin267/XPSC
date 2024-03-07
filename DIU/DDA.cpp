#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int main()
{
    int x1, y1, x2, y2;
    float x, y, dx, dy, length;
    int gd = DETECT, gm;

    printf("Enter the First Point : ");
    scanf("%d%d", &x1, &y1);

    printf("Enter the Second Point : ");
    scanf("%d%d", &x2, &y2);

    initgraph(&gd, &gm, "");

    if(abs(x2 - x1) > abs(y2 - y1))
        length = abs(x2 - x1);
    else
        length = abs(y2 - y1);

    dx = (x2 - x1) / length;
    dy = (y2 - y1) / length;
    x = x1;
    y = y1;

    for(int i = 0; i <= length; i++)
    {
        putpixel(x, y, WHITE);
        x += dx;
        y += dy;
    }

    getch();
    closegraph();
    return 0;
}
