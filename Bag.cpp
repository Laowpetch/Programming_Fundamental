#include<stdio.h>
int main(){
	int weight,sum=0;
	for(int i=0;i<10;i++){
		scanf("%d",&weight);
		sum += weight;
	}
	if(sum<=100){
		printf("%d",1);
	}
	else if(weight%100==0){
		printf("%d",sum/100);
	}
	else if(weight%100!=0){
		printf("%d",sum/100+1);
	}
	else{
		printf("%d",0);
	}
	return 0;
}
