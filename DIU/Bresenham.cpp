#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int main()
{
    int x, y, x1, y1, x2, y2, dx, dy, dp;
    int gd = DETECT, gm;

    printf("Enter the First Point : ");
    scanf("%d%d", &x1, &y1);

    printf("Enter the Second Point : ");
    scanf("%d%d", &x2, &y2);

    initgraph(&gd, &gm, (char*)"");

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    dp = 2 * dy - dx;

    x = x1;
    y = y1;

    for(int i = 0; i <= dx; i++)
    {
        putpixel(x, y, WHITE);

        if(dp < 0)
        {
            x++;
            dp += 2 * dy;
        }
        else
        {
            x++;
            y++;
            dp += 2 * dy - 2 * dx;
        }
    }

    getch();
    closegraph();
    return 0;
}
