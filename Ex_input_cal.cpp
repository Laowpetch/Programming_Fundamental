#include<stdio.h>/*use for printf command*/
#include<conio.h>/*use for getch command*/

main(){
	int number1,number2,result;
	printf("***Input your number1 : ");
	scanf("%d",&number1);
	printf("***Input your number2 : ");
	scanf("%d",&number2);
	result=number1+number2;
	printf("your number1 : %d \n",number1);
	printf("your number2 : %d \n",number2);
	printf("your result : %d \n",result);
	
	
	getch(); /*wait for Enter keypress for End Program*/
}
