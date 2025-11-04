#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm; // graphics driver and mode
    int x = 250, y = 250, radius = 100;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // initialize graphics mode

    circle(x, y, radius);  // draw circle at (250,250) with radius 100

    getch();   // wait for key press
    closegraph();  // close graphics window

    return 0;
}
