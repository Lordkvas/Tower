#include <iostream>
#include "TXLib.h"

class vragi
     {
        public:
        int x,y;
      int width, height;
      HDC pic;


   vragi (int x1,int y1,int w,int h,  string file ) {

       x=x1;
       y=y1;
       width=w;
       height=h;
       pic = txLoadImage(file.c_str());



 }
 int Draw()
 {txBitBlt(txDC(), x, y, width, height, pic);}
  int Move(int x1, int y1)

 {if (x1>x) x=x+1;
 if (x1<x) x=x-1;
 if (y1>y) y=y+1;
 if (y1<y) y=y-1;}




   };
