#include<stdio.h>
#include<string.h>
int main(){
	char s[21];
	scanf("%[^\n]",s);
	if(strlen(s)%2==0){
	printf("|====================|\n");
	printf("|                    |\n");
	printf("|");
	for(int i=0;i<(20-strlen(s))/2;i++){
		printf(" ");
	}
	printf("%s",s);
	for(int i=0;i<(20-strlen(s))/2;i++){
	printf(" ");
	}
	printf("|\n");
	printf("|                    |\n");
	printf("|====================|");
	}
	else{
	printf("|====================|\n");
	printf("|                    |\n");
	printf("|");
	for(int i=0;i<(21-strlen(s))/2;i++){
		printf(" ");
	}
	printf("%s",s);
	for(int i=0;i<(20-strlen(s))/2;i++){
	printf(" ");
	}
	printf("|\n");
	printf("|                    |\n");
	printf("|====================|");	
	}
	return 0;
}
