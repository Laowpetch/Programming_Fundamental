#include<stdio.h>
#include<conio.h>
int main(){
	int i=0;
	char a[100];
	scanf("%s",a);
	while(a[i]!=0){
		i++;
	}
	printf("%d",i);
}
