#include <iostream>
#include "TXLib.h"
#include  "ilya.h"


int main()
    {

   txCreateWindow(1366,760);
    vragi vr1(0,0,54,49, "01.bmp" );




   HDC fon=txLoadImage("фон.bmp");
   int point=0;

   while(1)
   {
   txBitBlt(txDC(),0,0,1366,760,fon);
   if (txMouseButtons()==1)
   cout<<txMouseX()<<" "<<txMouseY()<<" ";

    vr1.Draw();
    vr1.Move() ;
    if (txMouseButtons()==1)
        vr1.kill(txMouseX(),txMouseY());
         //vr1.kill(vr1.x,vr1.y);
   txSleep(100);
   txSetFillColor(TX_BLACK);
   txClear();

    }

    return 0;
    }

