#include <iostream>
#include "TXLib.h"

class vragi

     {
        public:
            int koord[21][2];

        int speed=5;
        int x,y;
      int width, height;
      HDC pic;
      int point=0;



   vragi (int x1,int y1,int w,int h,  string file )
    {
    koord[0][0]=1351;koord[0][1]=278;
    koord[1][0]=905;koord[1][1]=286;
    koord[2][0]=855;koord[2][1]=128;
    koord[3][0]=635;koord[3][1]=107;
    koord[4][0]=556;koord[4][1]=283;
    koord[5][0]=268;koord[5][1]=298;
    koord[6][0]=216;koord[6][1]=444;
    koord[7][0]=741;koord[7][1]=476;
    koord[8][0]=762;koord[8][1]=616;
    koord[9][0]=512;koord[9][1]=646;
    koord[10][0]=477;koord[10][1]=751;
       x=koord[0][0];
       y=koord[0][1];
       width=w;
       height=h;
       pic = txLoadImage(file.c_str());



 }

 int Draw()
 {
 txTransparentBlt(txDC(), x, y, width, height, pic,0,0,TX_WHITE);



 }

  int Move()


 {
 if (koord[point][0]>x) x=x+speed;
 if (koord[point][0]<x) x=x-speed;
 if (koord[point][1]>y) y=y+speed;
 if (koord[point][1]<y) y=y-speed;

 if (koord[point][1]>y-speed&&koord[point][1]<y+speed&&koord[point][0]>x-speed&&koord[point][0]<x+speed) point++;
 return 0;

 }







   };
