#include<stdio.h>
void triangle(int);
int prime(int);
int main(){
	return 0;
}
void triangle(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("* ");
		}
		if(i<n-1){
			printf("\n");
		}
	}
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
