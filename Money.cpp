#include<stdio.h>
#include<conio.h>
main () {
	char c;
	int money;
	int i=1;
	do{
	scanf("%d",&money);
	printf("1000 %d\n",money/1000);
	money=money%1000;
	printf("500 %d\n",money/500);
	money=money%500;
	printf("100 %d\n",money/100);
	printf("Y or N\n");
	scanf("%c",&c);		
	
	}
	while(c='Y');
	
}
