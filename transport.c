#include<stdio.h>
#include<conio.h>
#include<string.h>
float toStartStation(int);
float toEndStation(int);
float toDestination(int);
int signup();
int bookings();
int main(){

	   char choice;
	   clrscr();
      printf("New Journey? (Y or N)");
      choice=getche();
	if(choice=='Y'||choice=='y'){
	    signup();
	 }else if(choice=='N'||choice=='n')
	    bookings();


  getch();
  return 0;
}
float toStartStation(int c){
	float codeC,priceC;
	float htss[]={0.0,1.5,3.0,4.5,6.0,8.0};
	priceC=htss[c];
	printf("%f",priceC);
	return(priceC);
}
float toEndStation(int m){
	float codeM,priceM;
	float stes[]={0.0,5.75,12.5,22.25,34.5,45.0};
	priceM=stes[m];
	printf("%f",priceM);
	return(priceM);
}
float toDestination(int f){
	float codeF,priceF;
	float estd[]={0.0,1.5,3.0,4.5,6.0,8.0};
	priceF=estd[f];
	printf("%f",priceF);
	return(priceF);
}
int signup(){

    int c,m,f,upan=4320;
    char* name[100];
    float time,price=0.0;
      printf("Enter your name");
       scanf("%s",&name);
      printf("\nEnter your Time");
       scanf("%f",&time);
      printf("NAME: %s",name);
      printf("\nTime: %0.2f",time);
      printf("\nUPAN: %d",upan);
     printf("\nEnter code from home to start station C");
      scanf("%d",&c);
     price+=toStartStation(c);
     printf("\nEnter code from start station to end station M");
      scanf("%d",&m);
     price+=toEndStation(m);
     printf("\nEnter code from end station to destination F");
      scanf("%d",&f);
     price+=toDestination(f);
	printf("\n%f",price);
	return(upan);

}
int bookings(){

       upan=signup();
       printf("%d",upan);
       return 0;
}
