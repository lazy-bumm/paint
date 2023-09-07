#include <graphics.h>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
void shapes()
{
   char msg[80];
   setcolor(15);
   sprintf(msg, "F1:Line", 3);
   outtextxy(10, 80, msg);
   sprintf(msg, "F2:Square", 3);
   outtextxy(10, 100, msg);
   sprintf(msg, "F3:Rectangle", 3);
   outtextxy(10, 120, msg);
   sprintf(msg, "F4:Circle", 3);
   outtextxy(10, 140, msg);
   sprintf(msg, "F5:Ellipse", 3);
   outtextxy(10, 160, msg);
   sprintf(msg, "F6:Paint", 3);
   outtextxy(10, 180, msg);
   sprintf(msg, "F7:Erase", 3);
   outtextxy(10, 200, msg);
}
void colour()
{
   char msg[80];
   setcolor(15);
   sprintf(msg, " 1: Blue", 3);
   outtextxy(300, 1020, msg);
   setcolor(15);
   sprintf(msg, "2: Green", 3);
   outtextxy(400, 1020, msg);
   setcolor(15);
   sprintf(msg, "3: Cyan", 3);
   outtextxy(500, 1020, msg);
   setcolor(15);
   sprintf(msg, "4: Red", 3);
   outtextxy(600, 1020, msg);
   setcolor(15);
   sprintf(msg, "5: Magenta", 3);
   outtextxy(700, 1020, msg);
   setcolor(15);
   sprintf(msg, "6: Brown", 3);
   outtextxy(820, 1020, msg);
   setcolor(15);
   sprintf(msg, "7: Lightgray", 3);
   outtextxy(940, 1020, msg);
   setcolor(15);
   sprintf(msg, "8: Darkgray", 3);
   outtextxy(1060, 1020, msg);
   setcolor(15);
   sprintf(msg, "9: Lightblue", 3);
   outtextxy(1180, 1020, msg);
   setcolor(15);
   sprintf(msg, "0: Lightgreen ", 3);
   outtextxy(1300, 1020, msg);

   setcolor(15);
   outtextxy(1750,1020,(char*)"Press Esc to Exit");
   }
void sizze(int width, int height, int size)
{
   
   setcolor(3);
   outtextxy(1750,40,(char*)"By Aditya and Rumaan");
   string s = to_string(size);
   outtextxy(1850, height / 10, &*s.begin());
   outtextxy(1810, height / 10, (char *)"Size:");
}
void size1(int width, int height, int size)
{
   string s = to_string(size);
   outtextxy(1850, 20 + height / 10, &*s.begin());
   outtextxy(1810, 20 + height / 10, (char *)"X1:");
}
void size2(int width, int height, int size)
{
   string s = to_string(size);
   outtextxy(1850, 40 + height / 10, &*s.begin());
   outtextxy(1810, 40 + height / 10, (char *)"Y1:");
}
int main(void)
{
   int width = GetSystemMetrics(SM_CXSCREEN);
   int height = GetSystemMetrics(SM_CYSCREEN);
   initwindow(width, height, (char *)"", -3, -3);
   char msg[80];
   int gd = DETECT, gm, s, v, i, a;
   int size = 30;
   int x1 = 30, y1 = 30;
   POINT cup;
   int choice = 0;
   int color = 1;

   setcolor(color);
   while (1)
   {
      // setfillstyle(1,15);
      // floodfill(10,12,1);
      colour();
      shapes();
      sizze(width, height, size);
      size1(width, height, x1);
      size2(width, height, y1);
      GetCursorPos(&cup);

      
      setcolor(color);

      if (GetAsyncKeyState(VK_ESCAPE))
      {
         break;
      }
      if (GetAsyncKeyState(VK_OEM_PLUS))
      {
         x1++;
         size++;
         delay(80);
      }
      if (GetAsyncKeyState(VK_ADD))
      {
         y1++;
         delay(80);
      }
      if (GetAsyncKeyState(VK_SUBTRACT))
      {
         y1--;
         delay(80);
      }
      if (GetAsyncKeyState(VK_OEM_MINUS))
      {
         x1--;
         size--;
         delay(80);
      }
      if (GetAsyncKeyState(VK_F1))
      {
         choice = 1;
      }
      if (choice == 1)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            line(cup.x, cup.y, cup.x + x1, cup.y + y1);
         }
      }
      else if (GetAsyncKeyState(VK_F2))
      {
         choice = 2;
      }
      if (choice == 2)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            rectangle(cup.x, cup.y, cup.x + size, cup.y + size);
         }
      }
      else if (GetAsyncKeyState(VK_F3))
      {
         choice = 3;
      }
      if (choice == 3)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            rectangle(cup.x, cup.y, cup.x + x1, cup.y + y1);
         }
      }
      else if (GetAsyncKeyState(VK_F4))
      {
         choice = 4;
      }
      if (choice == 4)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            circle(cup.x, cup.y, size);
         }
      }
      else if (GetAsyncKeyState(VK_F5))
      {
         choice = 5;
      }
      if (choice == 5)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            ellipse(cup.x, cup.y, 0, 360, x1, y1);
         }
      }
      else if (GetAsyncKeyState(VK_F6))
      {
         choice = 6;
      }
      if (choice == 6)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            setfillstyle(1,color);
            floodfill(cup.x,cup.y,4);
            delay(100);
         }
      }
      else
      if(GetAsyncKeyState(VK_F7))
      {
        choice=7;
   }
   setcolor(color);
      if (choice == 7)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            int x2=cup.x;
            int y2=cup.y;
            int r=size;
            setcolor(0);
            circle(x2,y2,r);
            while(r!=0)
                circle(x2,y2,r--);
            r=size;
            setcolor(color);
         }
      }
      if (GetAsyncKeyState(VK_NUMPAD1))
      {
         color = 1;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD2))
      {
         color = 2;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD3))
      {
         color = 3;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD4))
      {
         color = 4;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD5))
      {
         color = 5;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD6))
      {
         color = 6;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD7))
      {
         color = 7;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD8))
      {
         color = 8;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD9))
      {
         color = 9;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD0))
      {
         color = 10;
         setcolor(color);
      }
      
      if (GetAsyncKeyState(VK_SPACE))
      {
         cleardevice();
      }
      setcolor(color);
      }
   getch();
   return 0;
}
