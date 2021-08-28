#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

//Função gotoxy
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main() {
    int x=1, y=1;
    int dx=-1, dy=-1;
    system("cls");//clrscr();
    do {
        gotoxy(x, y);//goto xy(x,y);
            putch(01);
            Sleep(70); //delay(800);
        gotoxy(x, y); //goto xy (x,y);
            putch(32);
        if( x==1 || x==80 ) {
            Beep(293,100); //sound(500);
            Sleep(70); //delay(800);
            //nosound();
            dx = -dx;
        }
        if( y==1 || y==24 ) {
            Beep(293,100); //sound(500);
            Sleep(70); //delay(800);
            //nosound();
            dy = -dy;
        }
        x += dx;
        y += dy;
    } while( !kbhit() );
}


//https://www.clubedohardware.com.br/topic/707299-resolvido-sound/
