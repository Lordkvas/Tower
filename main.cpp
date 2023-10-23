#include <iostream>
#include "TXLib.h"
#include  "ilya.h"


int main()
    {
    int koord[21][2];
    koord[0][0]=1351;koord[0][1]=278;
    koord[1][0]=905;koord[1][1]=286;
    koord[2][0]=855;koord[2][1]=128;
    koord[3][0]=635;koord[3][1]=107;
    koord[4][0]=556;koord[4][1]=283;
   txCreateWindow(1366,760);
    vragi vr1(koord[0][0],koord[0][1],54,49, "01.bmp" );




   HDC fon=txLoadImage("фон.bmp");
   int point=0;

   while(1)
   {
   txBitBlt(txDC(),0,0,1366,760,fon);
   if (txMouseButtons()==1)
   cout<<txMouseX()<<" "<<txMouseY()<<" ";

    vr1.Draw();
    if (vr1.Move(koord[point][0],koord[point][1])) point++;

   txSleep(100);
   txSetFillColor(TX_BLACK);
   txClear();

    }

    return 0;
    }

