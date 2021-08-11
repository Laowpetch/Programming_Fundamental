#include<stdio.h>
int main(){
	float price1,price2;
	scanf("%f",&price1);
	if(price1>=0){
	price2 = price1*1.10*1.07;
	printf("Total cost: %.2f Baht",price2);
	return 0;
	}
	else{
	printf("Error");
	}
}
