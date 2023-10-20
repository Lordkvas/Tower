#include "TXLib.h"
class Snaryad
{
public:


    HDC pic;
    COLORREF cvet=TX_WHITE;





    int x, y, w=27, h=26;
    Snaryad(int x1,int y1, string file)
    {
    x=x1;
    y=y1;
    pic=txLoadImage(file.c_str());

    };


    int Move(int x1, int y1)
    {
    if (x1>x) x=x+1;
    if (x1<x) x=x-1;
    if (y1>y) y=y+1;
    if (y1<y) y=y-1;
    };



    int Draw ()
    {
    txTransparentBlt (txDC(),x,y,w,h, pic, 0,0, cvet);

};

};

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

int main()
{
txCreateWindow(1360, 760);
Bashni Mag (100, 100,"маг.bmp");
Mag.Draw ();

Snaryad Sn1 (200, 200, "магснар.bmp");
Sn1.Draw();

while (1) {

Sn1.Move(500, 500);
Sn1.Draw();
txSleep(100);
}

}
