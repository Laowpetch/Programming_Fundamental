#include<stdio.h>
int prime(int x);
int main(){
	int x,a;
	scanf("%d",&x);
	a = prime(x);
	if(a==1){
		printf("x is prime");
	}
	else{
		printf("x is not prime");
	}
	return 0;
}
int prime(int x){
	if(x==1){
		return 0;
	}
	else if((x%2==0||x%3==0||x%5==0||x%7==0)&&(x!=2&&x!=3&&x!=5&&x!=7)){
		return 0;
	}
	else{
		return 1;
	}
}
