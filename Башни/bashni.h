#include "TXLib.h"

class Bashni
{
public:
    HDC pic;
    COLORREF color=TX_RED,cvet=TX_WHITE;
    int x, y, w=80, h=92;

    Bashni(int x1,int y1, string file)

    {
    x=x1;
    y=y1;
    pic=txLoadImage(file.c_str());


    };


    int Draw ()
    {
    txTransparentBlt (txDC(),x,y,w,h, pic, 0,0, cvet);

};

};
