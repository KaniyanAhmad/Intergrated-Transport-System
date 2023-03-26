 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 #include <windows.h>

void gotoxy(int, int);
int main(){
    float total=8.75;
    int x,y,hour=11,minute=00;
    x = 75;
    y = 14;

    gotoxy(x,y);
        printf("NAME\t\t\t\tUPAN");
            y+=2;
    gotoxy(x,y);
        printf("Codes----------");
            y+=2;
    gotoxy(x,y);
        printf("Price----------");
            y+=2;
    gotoxy(x,y);
        printf("Time------------");

    if(hour==10&& minute==00){
            y+=2;
        gotoxy(x,y);
            printf("Total Price: %.2f",total-0.4);
                printf("\t (Discount Applied)");
    }else{
        y+=2;
        gotoxy(x,y);
            printf("Total Price: %.2f", total);
	       }
    y+=5;
        gotoxy(x,y);
            printf("\t\t\t\tUBN");

    getch();
    return 0;
 }







 void gotoxy(int x, int y){
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
 }

