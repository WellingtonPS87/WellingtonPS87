#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

//Função gotoxy
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main() {
    int x=40, y=12;
    system("clear");//clrscr(clear);
        while( 1 ) {
        gotoxy(x,y);
        putch(219);
            switch( toupper(getch()) ) {
            case 'N': if( y>1 ) y--; break;
            case 'S': if( y<24 ) y++; break;
            case 'L': if( x<80 ) x++; break;
            case 'O': if( x>1 ) x--; break;
            case 'F': exit(1);
            }
        }
    }
