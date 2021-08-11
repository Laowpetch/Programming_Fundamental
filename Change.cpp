#include<stdio.h>
#include<conio.h>
main() {
	int cost,money,thorn;
	printf("good's cost : ");
	scanf("%d",&cost);
	printf("recieved money : ");
	scanf("%d",&money);
	thorn=money-cost;
	if(cost>money) {
		printf("You must be got another %d baht",cost-money);
	}
	else if (cost==money) {
		printf("do nothing");
	}
	else {
		if(thorn>=1000) {
			printf("give bang1000 %d bai",thorn/1000);
			thorn=thorn%1000;
		}
		if(thorn>=500) {
			printf("give bang500 %d bai",thorn/500);
			thorn=thorn%500;	
		}
		if(thorn>=100) {
			printf("give bang100 %d bai",thorn/100);
			thorn=thorn%100;
			}
		if(thorn>=20)  {
			printf("give bang20 %d bai",thorn/20);
			thorn=thorn%20;
			}
		if(thorn>=10) {
			printf("give coin10 %d an",thorn/10);
			thorn=thorn%10;
			}
		if("thorn>=1") {
			printf("give coin1 %d an",thorn);
		}
		
		
		
		 
	}
	getch();
}
