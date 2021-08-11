#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x,i,j,k;
	printf(" *** Show isosceles triangle ***\n");
	printf("Enter a counting number : ");
	scanf("%d",&x);{
	printf("Output : ");
		for(i=0;i<x+1;i++){
			for(j=1;j<=x-i;j++)
			printf(" ");
			for(j=1;j<=(2*i)-1;j++)
			printf("*");
			printf("\n");
			}
	
		}
		{
			
			for(i=1;i<x;++i){
			for(j=1;j<=i;++j)
			printf(" ");
			for(j=1;j<(-2*i)+i;++j)
			printf("*");
			printf("\n");
			}
			
		}
			
		
				return 0;
}	
		
		

			
	
