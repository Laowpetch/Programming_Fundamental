#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	printf("%.2f\n",fabs(a-b));
	printf("%.2f\n",fabs(b-c));
	printf("%.2f\n",fabs(a-c));
	return 0;
}
