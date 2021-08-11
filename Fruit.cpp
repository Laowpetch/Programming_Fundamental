#include<stdio.h> 
int main() {
	float fruitWeight[100],fruitCost[100],cost[100],totalCost;  
	int num,i;
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		scanf("%f%f",&fruitWeight[i],&fruitCost[i]);
	}
    for(i=1;i<=num;i++){
    	cost[i]=fruitWeight[i]*fruitCost[i];
	}
	printf("%f",cost[3]);
	totalCost = 0;
	for(i=1;i<=num;i++){
		totalCost=totalCost+cost[i];
		printf("%d\n",totalCost);
	}
//	printf("%d",totalCost);
	return 0;
}

