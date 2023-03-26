#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <transpor.h>

void main(){
	char ch;
		clrscr();
	printf("\n\n\t\t  Welcome to an Integrated Transport System");
	printf("\n");
	 line();
	 printf("\n\nAre you here for a New journey ride (Y or N)  ");
	scanf("%c",&ch);
	 if(ch=='Y'||ch=='y')
		booking();
	 else if(ch=='N'||ch=='n'){
	       printf("\nThanks For Choosing Daewoo Express");
	       printf("\n");
	       line();
	       }
		getch();
}











