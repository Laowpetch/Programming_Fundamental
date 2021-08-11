#include<stdio.h>
#include<math.h>
int main(){
	float x,a,b,c,d;
	scanf("%f",&a);
/*	scanf("%f",&b); */
	c = a*a*a*M_PI*4/3;
	printf("%d",c);
/*	d = b*b*b*M_PI*4/3;
	if(c>d){
		x = c-d;
		printf("%.3f",x);
	}
	else{
		x = d-c;
		printf("%.3f",x);
	}*/
	return 0;
}
