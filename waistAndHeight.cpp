#include<stdio.h>
#include<conio.h>
main() {
	float WS,H;
	printf("Input your waist size(inches) : ");
	scanf("%f",&WS);
	printf("Input your Height(cm) : ");
	scanf("%f",&H);
	printf("-------------------\n");
	if(WS<24) {
		printf("Size : \n"); //Don't have inf.
	}
	else if (WS<=26) {
		printf("Size : S\n");
	}
	else if (WS<=29) {
		printf("Size : M\n");
	}
	else if (WS<=32) {
		printf("Size : L\n");
	}
	else if (WS<=36) {
		printf("Size : X\n");
	}
	else  {
		printf("Size : XXL\n");
	}
	if (H<=155) {
		printf("Inseam : 28 inches");
	}
	else if (H<=160) {
		printf("Inseam : 30 inches");
	}
	else if (H<=170) {
		printf("Inseam : 32 inches");
	}
	else {
		printf("Inseam : 34 inches");
	}
}
