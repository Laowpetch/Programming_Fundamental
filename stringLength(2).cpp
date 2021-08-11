#include<stdio.h>
#include<conio.h>
#include<string.h>
main () {
	char xxx[100],i;
	scanf("%s",&xxx);
	if((strlen(xxx))%2=1) {
		for(i=0;i>strlen(xxx);i++) {
			printf("xxx[(strlen(xxx)+1)/2]");
		}
	}
	else {
		printf("XX");
	}
}
