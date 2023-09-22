#include <TXLib.h>
using namespace std;
int Help()
{  txBegin();
  txSetFillColor(TX_RED);
  txClear();
  txSetColor(TX_BLACK);
 txTextOut(50,100, "Всех приветствую в моей игре,эта игра отлично подходит для того,чтоб отлично провести время с друзьями!");


 txEnd();
  txSleep(50);
  while (!txGetAsyncKeyState (VK_ESCAPE))
  {;}

}
class buttons
 {
    public:
int x=100,y=100;
int w=120,h=50;
COLORREF color=TX_RED, colorBg=TX_YELLOW;
string text="кнопка";

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
   }


  int Click(int x1,int y1)
  {
  if (x1>x&&x1<x+85&&y1>y&& y1<y+83)
  return 1;
  return 0;

  }

};

int main()

 {txCreateWindow(900, 700);
 txSetFillColour(TX_WHITE);
 txClear();
 txSetFillColour(TX_RED);
 buttons btn1(370,245,100,100,TX_LIGHTGREEN,TX_BLACK,"Играть");


    buttons btn2(370,345,100,100,TX_LIGHTGREEN,TX_BLACK,"Меню");


    buttons btn3(370,445,100,100,TX_LIGHTGREEN,TX_BLACK,"Выход");

  int play=1;
   while(play)
  {
  txBegin();
  txSetFillColor(TX_RED);
  txClear();
  txSetColor(TX_WHITE);

     btn1.Draw();
      if (btn1.Click(txMouseX(), txMouseY())) play=0;
     btn2.Draw();
     if (btn2.Click(txMouseX(), txMouseY()))Help() ;
     btn3.Draw();
    if (btn3.Click(txMouseX(), txMouseY())) {return 0; }

     txEnd();
     }

  }

