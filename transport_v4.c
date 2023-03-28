#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


float price();
void new_account();
void booking();
void menu();
void account_check();



int upan,ubn,i,upanc,ae,cp,mp,fp;
float pricec,pricem,pricef;
char name[20];

void main(){

    menu();
    booking();



}

float price(){

    float price,total=0;
	float c[]={0.0,1.5,3.0,4.5,6.0,8.0};
	float m[]={0.0,5.75,12.5,22.25,34.5,45.0};
	float f[]={0.0,1.5,3.0,4.5,6.0,8.0};

	system("cls");

	printf("\n\nC1____ $1.5\nC2____$3.0\nC3____$4.5\nC4____$6.0\nC5____$8.0");
        printf("\n Please Enter The Code From Home To Following Set C");
            scanf("%d",&cp);
                pricec = c[cp];
                    total += c[cp];

	 printf("\n\nM1____ $5.75\nM2____$12.5\nM3____$22.25\nM4____$34.5\nM5____$45.0");
        printf("\n Please Enter The Code From The Following Set M");
            scanf("%d",&mp);
                pricem = m[mp];
                    total += m[mp];
	 printf("\n\nF1____ $1.5\nF2____$3.0\nF3____$4.5\nF4____$6.0\nF5____$8.0");
        printf("\n Please Enter The Code From The Follwing Set F");
            scanf("%d",&fp);
                pricef = f[fp];
                    total += f[fp];
        return total;


}

void menu(){
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

void account_check(){
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

void booking(){
    float total;
int hour, minute,x,y;
       system("cls");
       printf("\t\tMake a New Booking by Entering your UPAN");
            printf("Enter Your UPAN: ");
                scanf("%d",&upanc);

       if(upanc!=upan){
        printf("Invalid UPAN\t\t\t Try Again");
            printf("\nPress Any key to Continue");

        getch();
            booking();
       }
    //Journey details
        //Time
        system("cls");
            printf("Enter the Time(ex 12:57): ");
                scanf("%d:%d",&hour,&minute);
        //Price
           total = price();
        //UBN generator
            srand(time(0));
                ubn = (rand()%(99999+1-10000)+10000);

        //Invoice
            system("cls");

        printf("\n\n\n\t\t\t\t%s\t\t\t\t%d",name,upan);

        printf("\n\t\t\t\tCodes: C%d  M%d  F%d",cp,mp,fp);


        printf("\n\t\t\t\tPrice: %.2f %.2f %.2f",pricec,pricem,pricef);

        printf("\n\t\t\t\tTime: %d:%d",hour,minute);

    if(hour==10&& minute==00){

            printf("\n\t\t\t\tTotal Price: %.2f",total-0.4);
                printf("\t (Discount Applied)");
    }else{

            printf("\n\t\t\t\tTotal Price: %.2f", total);
	       }

            printf("\n\t\t\t\t\t\t\t\t\t%d",ubn);


       getch();
       menu();
}



