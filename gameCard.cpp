#include<stdio.h>
int main(){
	int x,i,j,k;
	scanf("%d",&x);
		for(i=1;i<=x;i++){
    		for(j=1;j<=x;j++){
    			for(k=1;k<=x/2;k++){
    				printf(" ");
				}
				printf("*");	
			}
		printf("\n");	
		}
		return 0;
	}
