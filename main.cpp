#include <TXLib.h>
#include "bashni.h"
#include "ilya (1).h"
using namespace std;
int Help()
{  txBegin();
  txSetFillColor(TX_WHITE);
  txClear();
  txSetColor(TX_BLACK);
 txTextOut(40,50,"Tower Defense-��� ���������� ������������� ��������� � �������� �������. ������ ������ �������� � ������ ������� �� ���� ��������� ������. ��� ����� �� ���� ��������� ��� �� �������� �� ����� �����, ��������� ��, ����������� � ��� �����.");
 HDC  pic = txLoadImage("���.bmp");


 txEnd();
  txSleep(50);
  while (!txGetAsyncKeyState (VK_ESCAPE))
  {;}

}


int Play()
{
txClear();

int g;
g=0;
Bashni bash1(100,200,"���.bmp");
vragi vrag1(300,300,91,74,"01.bmp");
while(1)
{
  txBegin();
txSetColor(TX_WHITE);
 //txDrawText(10, 10, 500, 500,"���� ������");
HDC  pic = txLoadImage("���.bmp");
txTransparentBlt(txDC(),0,0,  1366, 760,pic,0,0, TX_WHITE);


// bashi
//if (
bash1.Draw();
vrag1.Draw();
vrag1.Move(100,200);
txEnd();


}

}








class buttons
 {
    public:
int x=100,y=100;
int w=120,h=50;
COLORREF color=TX_RED, colorBg=TX_YELLOW;
string text="������";

    buttons(int x1,int y1,int w1,int h1,COLORREF color1, COLORREF colorBg1,string text1)
    {
        x=x1;
        y=y1;
    w=w1;
    h=h1;
    color=color1;
    colorBg=colorBg1;
    text=text1;
    }
     int Draw()
  {


 // txTransparentBlt(txDC(),x,y,85, 83,pic,0,0, cvet);
 txRectangle (x, y, x+w, y+w);
 txDrawText(x, y, x+w, y+w,text.c_str());
   }


  int Click(int x1,int y1)
  {
  if (x1>x&&x1<x+85&&y1>y&& y1<y+83)
  return 1;
  return 0;

  }

};

int main()

 {txCreateWindow(1360, 760);
 txSetFillColour(TX_WHITE);
 txClear();
 txSetFillColour(TX_RED);
 buttons btn1(650,245,100,100,TX_LIGHTGREEN,TX_RED,"������");


    buttons btn2(650,345,100,100,TX_LIGHTGREEN,TX_RED,"����");


    buttons btn3(650,445,100,100,TX_LIGHTGREEN,TX_RED,"�����");

  int play=1;
   while(play)

  {
  txBegin();
  txSetFillColor(TX_BLACK);
  txClear();
  txSetColor(TX_WHITE);

     btn1.Draw();
      if (btn1.Click(txMouseX(), txMouseY())&& txMouseButtons()==1) play=0;
     btn2.Draw();
     if (btn2.Click(txMouseX(), txMouseY())&& txMouseButtons()==1)Help() ;
     btn3.Draw();
    if (btn3.Click(txMouseX(), txMouseY())&& txMouseButtons()==1) {return 0; }

     txEnd();
     }
Play();
  }

