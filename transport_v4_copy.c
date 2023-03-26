#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int price();
int passenger_account();
int booking();


int upan;
char name[20];

void main(){

    booking();
    getch();

}

/*int price(){
    float price,cp,mp,fp,total;
	float c[]={0.0,1.5,3.0,4.5,6.0,8.0};
	float m[]={0.0,5.75,12.5,22.25,34.5,45.0};
	float f[]={0.0,1.5,3.0,4.5,6.0,8.0};
        if(ch=='c'){
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
	 scanf("%d",&fp);

}*/

int passenger_account(){
    int t;
    printf("1: New Account\n2: Login");
    printf("\nChoose 1 or 2: ");
    scanf("%d",&t);

        if(t==1){
            printf("Enter Your First Name");
            scanf("%s",&name);
              //random 4 digit UPAN generator
                srand(time(0));
                upan = (rand()%(9999+1-1000)+1000);
            printf("%d",upan);
            //Use file Handling to store UPAN along with their name
        }else if(t==2){
            //search user name in a file and if it exists show them their name and their upan
        }
            return ;
}

int booking(){
       passenger_account();
    //enter journey details of the user

}
