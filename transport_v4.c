#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int price();
void new_account();
int booking();
int menu();
int account_check();



int upan,i,upanc,ae;
char name[20];

void main(){

    menu();
    booking();



}

int price(){
    float price,cp,mp,fp,total;
	float c[]={0.0,1.5,3.0,4.5,6.0,8.0};
	float m[]={0.0,5.75,12.5,22.25,34.5,45.0};
	float f[]={0.0,1.5,3.0,4.5,6.0,8.0};
        /*if(ch=='c'){
            printf("\n\nC1____ $1.5\nC2____$3.0\nC3____$4.5\nC4____$6.0\nC5____$8.0");
        printf("\n Please Enter The Code From Home To Following Set C");
            scanf("%d",&cp);

	      price = c[n];
	      }else if(ch=='m')
	      price = m[n];
	   else if(ch=='f')
	      price = f[n];



	 printf("\n\nM1____ $5.75\nM2____$12.5\nM3____$22.25\nM4____$34.5\nM5____$45.0");


	printf("\n Please Enter The Code From The Following Set M");
	 scanf("%d",&mp);

	 printf("\n\nF1____ $1.5\nF2____$3.0\nF3____$4.5\nF4____$6.0\nF5____$8.0");


	printf("\n Please Enter The Code From The Follwing Set F");
	 scanf("%d",&fp);*/

}

int menu(){
int choice;
        system("cls");
    printf("1: Make a New Account");
    printf("\n2: Make a new Booking");
    printf("\n3: Exit");
    printf("\nEnter Your Choice ");
    scanf("%d",&choice);

        switch(choice){
    case 1:
          new_account();
          break;
        case 2:
          booking();
          break;
        case 3:
          exit(1);
          break;
        default:
          printf("Invalid Choice");
        }

}

int account_check(){
        printf("2 Working");
        //Use file Handling to store UPAN along with their name

 //search user name in a file and if it exists show them their name and their UPAN

}
void new_account(){


                system("cls");

            printf("Enter Your First Name");
            scanf("%s",&name);
              //random 4 digit UPAN generator
                srand(time(0));
                upan = (rand()%(9999+1-1000)+1000);

            printf("UPAN = %d",upan);

        getch();
        menu();
}

int booking(){

       system("cls");
       printf("\t\tMake a New Booking by Entering your UPAN");
       printf("Enter Your UPAN: ");
       scanf("%d",&upanc);

       if(upanc!=upan){
        printf("Invalid UPAN\t\t\t Try Again");
        printf("\nPress Any key to Countinue");
        getch();
        booking();
       }
    //Journey details




       getch();
       menu();



}
