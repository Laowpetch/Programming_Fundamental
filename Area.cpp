#include<stdio.h>
int main (){
	double a,b;
	scanf("%lf%lf",&a,&b);
	if(a>=0&&b>=0){
	printf("Area = %lf x %lf = %lf",a,b,a*b);
	}
	else{
	printf("Error");
	}
	return 0;
}
