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

Bashni()

    {
    x=-100;
    y=-100;
    pic=txLoadImage("маг.bmp");


    };


    int Draw ()
    {
    txTransparentBlt (txDC(),x,y,w,h, pic, 0,0, cvet);

};

};

 class Zamok
 {
 public:

    int x, y, hp=10;






    int Draw ()
    {
txSetColor(TX_BLACK);
txTextOut(40, 50, "Жизни ");
if (hp==1) txTextOut(100, 50,  "1" );
if (hp==2) txTextOut(100, 50,  "2" );
if (hp==3) txTextOut(100, 50,  "3" );
if (hp==4) txTextOut(100, 50,  "4" );
if (hp==5) txTextOut(100, 50,  "5" );
if (hp==6) txTextOut(100, 50,  "6" );
if (hp==7) txTextOut(100, 50,  "7" );
if (hp==8) txTextOut(100, 50,  "8" );
if (hp==9) txTextOut(100, 50,  "9" );
if (hp==10) txTextOut(100, 50,  "10" );
};

int smert (int y)
{
if (y>750) hp=hp-1;
if (hp==0) return 0;
return 1;
}



 } ;




 class Snaryad
{
public:


    HDC pic;
    int finish=0;
    COLORREF cvet=TX_WHITE;





    int x, y, w=27, h=26;
    Snaryad(int x1,int y1, string file)
    {
    x=x1;
    y=y1;
    pic=txLoadImage(file.c_str());

    };

   Snaryad()
    {
    x=-100;
    y=-100;
    pic=txLoadImage(file.c_str());

    };


    int Move(int x1, int y1)
    {
    if (x1>x) x=x+6;
    if (x1<x) x=x-6;
    if (y1>y) y=y+6;
    if (y1<y) y=y-6;


 if (x<x1+6&&x>x1-6&&y<y1+6&&y>y1-6) finish=1;


    };



    int Draw ()
    {
    txTransparentBlt (txDC(),x,y,w,h, pic, 0,0, cvet);

};

};

