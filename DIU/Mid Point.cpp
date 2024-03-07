#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int main()
{
    int x, y, x1, y1, x2, y2, dx, dy, ip, d;
    int gd = DETECT, gm;

    printf("Enter the First Point : ");
    scanf("%d%d", &x1, &y1);

    printf("Enter the Second Point : ");
    scanf("%d%d", &x2, &y2);

    initgraph(&gd, &gm, (char*)"");

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    ip = 2 * dy - dx;
    d = 2 * (dy - dx);

    x = x1;
    y = y1;

    for(int i = 0; i <= dx; i++)
    {
        putpixel(x, y, WHITE);

        if(ip < 0)
        {
            x++;
            ip += 2 * dy;
        }
        else
        {
            x++;
            y++;
            ip += 2 * d;
        }
    }

    getch();
    closegraph();
    return 0;
}
