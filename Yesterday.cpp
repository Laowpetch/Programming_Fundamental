#include<stdio.h>
#include<conio.h>
main () {
	int d,m,y;
   printf("Input day\n");
   scanf("%d",&d);
   printf("Input month\n");
   scanf("%d",&m);
   printf("Input year\n");
   scanf("%d",&y);
   if(d=1) {
   	if(m=1){
   		y=y-1;
	   }
	else {
		m=m-1;
	}
   }
   else {
   	d=d-1;
   }
   printf("Yesterday is %d/%d/%d",d,m,y);
}
