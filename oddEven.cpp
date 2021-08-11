#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	if(a<=0){
		printf("Error");
	}
	else{
		if(a%2==0){
			b=a+1;
				
		}
		else{
			b=a+2;
		}
	}
	return 0;
}
