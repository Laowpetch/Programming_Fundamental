#include<stdio.h>
int main(){
	int weight,weight10per,day,week;
	scanf("%d",&weight);
	weight10per = weight*0.1;
	day = weight10per/0.2;
	week = day/7;
	day = day%7;
	if(weight==0){
		printf("Error");
	}
	else if(week==2&&day==6){
		printf("Error");
	}
	else{
	printf("Take about %d weeks %d days",week,day);
	}
	return 0;
}
