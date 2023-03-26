void Time();
void line();
void booking();
float prices(float,int);

float prices(float ch,int n){
       float price;
	float c[]={0.0,1.5,3.0,4.5,6.0,8.0};
	float m[]={0.0,5.75,12.5,22.25,34.5,45.0};
	float f[]={0.0,1.5,3.0,4.5,6.0,8.0};
	   if(ch=='c')
	      price = c[n];
	   else if(ch=='m')
	      price = m[n];
	   else if(ch=='f')
	      price = f[n];

	return price;
}


void booking(){
char* name[100];
int cp,mp,fp,upan=4300,ticket=1200;
char c='c',m='m',f='f';
float total=0.0,time;
   clrscr();
       printf("\t\t Enter Your Information Carefully");
	printf("\n");
	line();
	printf("\n\tPlease Enter Your First Name  ");
	 scanf("%s",name);
	printf("\n\tPlease Enter The Time(ex 12.57)  ");
	 scanf("%f",&time);
   clrscr();
       printf("\t\t Please Enter Your Bookings Details Carefully");
	printf("\n");
	line();
       printf("\n\nC1____ $1.5\nC2____$3.0\nC3____$4.5\nC4____$6.0\nC5____$8.0");
	printf("\n Please Enter The Code From The Follwing Set C");
	 scanf("%d",&cp);
	  total+=prices(c,cp);
	   printf("\n");
	    line();
   clrscr();
   printf("\n");
	    line();
       printf("\n\nM1____ $5.75\nM2____$12.5\nM3____$22.25\nM4____$34.5\nM5____$45.0");
	printf("\n");
	line();
	printf("\n Please Enter The Code From The Follwing Set M");
	 scanf("%d",&mp);
	  total+=prices(m,mp);
	   printf("\n");
	    line();
   clrscr();
   printf("\n");

	    line();
       printf("\n\nF1____ $1.5\nF2____$3.0\nF3____$4.5\nF4____$6.0\nF5____$8.0");
	printf("\n");
	line();
	printf("\n Please Enter The Code From The Follwing Set F");
	 scanf("%d",&fp);
	  total+=prices(f,fp);
	   printf("\n");
	    line();

   clrscr();
       printf("\n\t\t\t Your Booking Details Are");
	printf("\n");
	line();
	printf("\n\n\n\n\t\t\t Name: %s",name);
	 printf("\n\t\t\t Time: %0.2f",time);
	  printf("\n\t\t\t Upan: %d",upan);
	   printf("\n\t\t\t Journey no.: %d",ticket);
	    printf("\n\t\t\t Entered Codes: C%d, M%d, F%d",cp,mp,fp);
	    if(time==10.00){
	     printf("\n\t\t\t Total Price: %.2f",total-0.4);
	      printf("\n\n\t\t\t Discount is Applied");
	       }else
		 printf("\n\t\t\t Total Price: %f", total);
		  printf("\n\n\n\n\n");
		   Time();
		  printf("\n");
		  line();
		  printf("\n\t\t\t\tHave a Safe Journey");
		    upan++;
		     ticket++;


}

void line(){
	  int i;
	    for(i=0;i<=79;i++)
	     printf("_");
}

void Time(){
    struct tm* ptr;
    time_t t;
    t=time(NULL);
    ptr=gmtime(&t);
    printf("\t Printed on: %s",asctime(ptr));

}

