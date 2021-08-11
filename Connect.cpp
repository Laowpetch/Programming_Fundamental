#include<stdio.h>
int main(){
	int a,b,c,d,e;
	char f[100];
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	scanf("%s",f);
	printf("%d%s%d%s%d%s%d%s%d",a,f,b,f,c,f,d,f,e);
	return 0;
}
