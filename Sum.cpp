#include<stdio.h>
int main(){
	int a,sum=0;
	scanf("%d",&a);
	if(a>0){
		for(int i=0;i<=a;i++){
			sum += i;
		}
	printf("%d",sum);
	}
	else{
		printf("Error");
	}
	return 0;
}
