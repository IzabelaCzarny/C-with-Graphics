#include <iostream>
#include "graphics.h"
#pragma comment(lib,"graphics.lib")

void createFilledCircle(int x, int y, int r, int color)
{
    setcolor(color);
    circle(x, y, r);
    setfillstyle(SOLID_FILL, color);
    floodfill(x, y, color);
}

int main()
{
    initwindow(1000, 500);

    createFilledCircle(0, 250, 175, 14);
    createFilledCircle(200, 250, 5, 6);
    createFilledCircle(230, 250, 9, 8);
    createFilledCircle(270, 250, 11, 9);
    createFilledCircle(310, 250, 7, 4);
    createFilledCircle(370, 250, 24, 5);
    createFilledCircle(460, 250, 17, 3);
    setcolor(1);
    ellipse(460, 250, 150, 30, 20, 7);
    createFilledCircle(550, 250, 16, 9);
    createFilledCircle(650, 250, 16, 11);
    createFilledCircle(800, 250, 2, 2);

    getch();
    closegraph();
    return 0;
}