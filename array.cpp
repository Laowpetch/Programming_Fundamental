#include<stdio.h>
#include<conio.h>
main () {
	int n,m,i=0,j=0;
	int score [500][500],sum [500]={0};
	printf("Enter number of student  :  ");
	scanf("%d",&n);
	printf("Enter number of subject  :  ");
	scanf("%d",&m);
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			printf("Student %d Subject %d : ",i+1,j+1);
			scanf("%d",&score[i][j]);
		}
	}
	i=0,j=0;
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			sum[i]=sum[i]+score[i][j];
		}
	}
	i=0,j=0;
	for (i=0;i<n;i++) {
			printf("total of student %d is %d\n",i+1,sum[i]);
	}
}
//Written by Pachara Loawpetch M.6/1 No.25


