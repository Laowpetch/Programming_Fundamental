#include <stdio.h>
#include <conio.h>
main () {
	int i=1,a ;
	printf("Input You Number 2-12\t");
	scanf("%d",&a);
	printf("Muitiplication table : %d\n",a);

	while(i<=12)
	{printf("%d  *  %d  =  %d\n",a,i,i*a);
	i++;
	}
	getch();
}
