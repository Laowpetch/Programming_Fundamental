#include<stdio.h>
int main(){
	double a;
	scanf("%lf",&a);
	if(a<=-1){
		printf("%.2lf",a*a+1);
	}
	else if(-1<a&&a<2){
		printf("%.2lf",a+4);
	}
	else if(a>=2){
		printf("5");
	}
	return 0;
}
