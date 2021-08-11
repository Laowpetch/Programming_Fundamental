#include<stdio.h>
#include<math.h>
int main(){
	char f;
	float a,b,c,d,distance;
	scanf("%f%c%f",&a,&f,&b);
	scanf("%f%c%f",&c,&f,&d);
	distance = sqrt(pow(a-c,2)+pow(b-d,2));
	printf("%f",distance);
	return 0;
}
