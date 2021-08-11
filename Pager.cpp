#include<stdio.h>
#include<string.h>
int main(){
	float cost=0,x;
	int a,b;
	char cc[10000];
	scanf("%[^\n]",cc);
	a = strlen(cc);
	b = a;
	while(a!=0){
	if(a>=20){
		x = a/20;
		cost += x*18.5;
		a -= 20*x;
	}
	else if (a>=8){
		x = a/8;
		cost += x*6.5;
		a -= 8*x;
	}
	else if (a>=3){
		x = a/3;
		cost += x*3;
		a -= 3*x;
	}
	else{
		x = a;
		cost += x*1.5;
		a -= 1.5*x;
	}
	}
	printf("Text's length is : \"%d\"",b);
	printf("\nTotal price is : %.2f Baht\\.-",cost);
return 0;
}

