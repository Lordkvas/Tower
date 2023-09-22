#include "TXLib.h"

class Bashni
{
public:
    HDC pic;
    COLORREF color=TX_RED,
    int x, y;
    
    Bashni(int x1,int y1)
     
    {
    x=x1;
    y=y1;
    pic=txLoadImage()
    
    
    };
    
    
    int Draw ()
    {
    txTransparentBlt(txDC(),x,y, pic,0,0, cvet);
    
    }

};
