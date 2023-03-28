 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 #include <windows.h>
 #include <graphics.h>

void gotoxy(int, int);
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    bar3d(100, 100, 200, 200, 20 , 1);

    getch();
    closegraph();
    return 0;
 }







 void gotoxy(int x, int y){
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
 }

