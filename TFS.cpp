#include<stdio.h>
int main(){
	double lp,card,lpd,lpt;
	scanf("%lf",&lp);
	scanf("%d",&card);
	lpd = card*400;
	lpt = lp-lpd;
	if(lpt<=0){
		printf("%.4lf",0);
	}
	else{
		printf("%.4lf",lpt);
	}
}
