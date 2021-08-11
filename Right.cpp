#include<stdio.h>
#include<string.h>
int main(){
	int num,i,x;
	char a[31];
	scanf("%[^\n]",a);
	num = strlen(a);
	for(i=0;i< 30-num;i++){
		printf(" ");
	}
	printf("%s",a);
	return 0;
}
