#include<stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=b;
	b=a;
	a=e;	
	e=d;
	d=c;
	c=e;
	printf("%d%d%d%d",a,b,c,d);
	return 0;
}
