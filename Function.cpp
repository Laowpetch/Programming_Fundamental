#include<stdio.h>
void triangle(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("* ");
		}
		if(i<n-1){
			printf("\n");
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	triangle(n);
	return 0;
}
