#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	scanf("%[^\n]",a);
	if(strlen(a)==3){
		printf("*****\n");
		printf("*%s*\n",a);
		printf("*****");
	}
	else {
		printf("Error");
	}
	return 0;
}
