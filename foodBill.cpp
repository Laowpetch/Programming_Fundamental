#include <stdio.h>
#include <conio.h>
main ()
 {
  int m,n,p,budg,peop,sumfood,cfood[100],divi;
  char str[100];
  
  printf("Enter your number of people : \n");
  scanf("%d",&peop);
  
  printf("Enter your budget : \n");
  scanf("%d",&budg);
  
  printf("Enter number of menu : \n");
  scanf("%d",&m);
  
  for(n=0;n<m;n++) {
   
   printf("Name of menu : \n");
   scanf("%s",&str[n]);
    
  }
  
  for(p=0;p<m;p++) {
   
   printf("Cost of menu : \n");
   scanf("%d",&cfood[p]);
  }
 
 sumfood=0;
 sumfood==sumfood+cfood[p];
 
 divi==sumfood/peop;
 
 for(n=0;n<m;n++) {
  
  printf("List of menu : %s \n",str[n]);
  
 }
 
 for(p=0;p<m;p++) {
  
  printf("Cost : %d \n",cfood[p]);
 }
 
 printf("Total of cost is : %d \n",sumfood);
 printf("Number of people is : %d \n",peop);
 printf("Division is : %d \n",divi);
 
 }
