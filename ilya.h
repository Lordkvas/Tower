#include <iostream>
#include "TXLib.h"

class vragi

     {
        public:
        int speed=5;
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
 {
 txTransparentBlt(txDC(), x, y, width, height, pic,0,0,TX_WHITE);



 }

  int Move(int x1, int y1)


 {if (x1>x) x=x+speed;
 if (x1<x) x=x-speed;
 if (y1>y) y=y+speed;
 if (y1<y) y=y-speed;

 if (y1>y-speed&&y1<y+speed&&x1>x-speed&&x1<x+speed) return 1;
 return 0;

 }







   };
