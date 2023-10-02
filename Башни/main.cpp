#include "TXLib.h"

class Bashni
{
public:
    HDC pic;
    COLORREF color=TX_RED,cvet=TX_WHITE;
    int x, y, w=157, h=185;

    Bashni(int x1,int y1)

    {
    x=x1;
    y=y1;
    pic=txLoadImage("маг.bmp");


    };


    int Draw ()
    {
    txTransparentBlt (txDC(),x,y,w,h, pic, 0,0, cvet);

};

};

int main()
{
txCreateWindow(1360, 760);
Bashni Mag (100, 100);
Mag.Draw ();
}
