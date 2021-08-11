#include<stdio.h>
#include<conio.h>
main () 
{
     int mname,t,i,j,row1,column1,row3,column3,a,b,c,d,k,l,pop,Y,N;
     int seat11[8][20]={0};
     int seat3[5][9]={0};
     printf("Which movie do you want to see?\n 1 : Weathering with you\n 2 : Blue Valentine \n 3 : Her private life\n ");
    scanf ("%d",&mname);
     if(mname<=3&&mname>0)
     {
      printf ("Select the theater\n 1)Theater 1 : normal class 150 Bath\n 2)Theater 2 : normal class 150 Bath\n 3)Theater 3 : High class 200 Bath\n");
      scanf("%d",&t);
      if(t>=1&&t<2)
      {
       printf("\t\t  1 2 3 4 5 6 7 8 91011121314151617181920");
       for(i=0;i<8;i++)
      {
        printf("\n\t\t%d ",i+1);
        for(j=0;j<20;j++)
        {
         printf("%d ",seat11[i][j]);
 
        }
       }
      printf("\nHow many seat do you want? : ");
       scanf("%d",&a);
       for(b=0;b<a;b++)
      {
        printf("\n What row do you want? : ");
       scanf ("%d",&row1);
       printf(" What column do you want? : ");
       scanf ("%d",&column1);
       seat11[row1-1][column1-1]=1; 
 
      }
       printf("\n\n\t\tseat now\n\n");
      printf("\t\t  1 2 3 4 5 6 7 8 91011121314151617181920");
      for(i=0;i<8;i++)
      {
       printf("\n\t\t%d ",i+1);
       for(j=0;j<20;j++)
       {
        printf("%d ",seat11[i][j]);
        }
       }
       int pop,cola,menu,mpop,mcola,total,total2,total3;
       printf("\n\nDo you want popcorn or cola?\n \tPopcorn 60 Bath\n \tCola    20 Bath\n Ans : 1)Yes 2)No\n");
       printf("Choose : ");
       scanf("%d",&menu);
       if(menu>=1&&menu<2)
       {
        pop=60;
        cola=20;
        printf("How many popcorn do you want? : ");
        scanf("%d",&mpop);
        printf("How many cola do you want? : ");
        scanf("%d",&mcola);
        total=mpop*pop+mcola*cola;
        printf("\tOK!!! This success total of popcorn and cola : %d Bath\n",total);
        total2=total+a*150;
        printf("\tTotal of all which you have to pay : %d Bath\n",total2);
        printf("*****Please pay money at counter.......Thank you for using our service ENJOY THE MOVIE.*****");
      }
      else
      {
       total3=a*150;
       printf("Total of all which you have to pay : %d Bath\n",total3);
       printf("*****Please pay money at counter.......Thank you for using our service ENJOY THE MOVIE.*****");
      }
      }
      else if(t>=2&&t<3)
      {
       printf("\t\t  1 2 3 4 5 6 7 8 91011121314151617181920");
       for(i=0;i<8;i++)
      {
        printf("\n\t\t%d ",i+1);
        for(j=0;j<20;j++)
        {
         printf("%d ",seat11[i][j]);
 
        }
       }
      printf("\nHow many seat do you want? : ");
       scanf("%d",&a);
       for(b=0;b<a;b++)
      {
        printf("\n What row do you want? : ");
       scanf ("%d",&row1);
       printf(" What column do you want? : ");
       scanf ("%d",&column1);
       seat11[row1-1][column1-1]=1; 
 
      }
       printf("\n\n\t\tseat now\n\n");
      printf("\t\t  1 2 3 4 5 6 7 8 91011121314151617181920");
      for(i=0;i<8;i++)
      {
       printf("\n\t\t%d ",i+1);
       for(j=0;j<20;j++)
       {
        printf("%d ",seat11[i][j]);
        }
       }
       int pop,cola,menu,mpop,mcola,total,total2,total3;
       printf("\n\nDo you want popcorn or cola?\n \tPopcorn 60 Bath\n \tCola    20 Bath\n Ans : 1)Yes 2)No\n");
       printf("Choose : ");
       scanf("%d",&menu);
       if(menu>=1&&menu<2)
       {
        pop=60;
        cola=20;
        printf("How many popcorn do you want? : ");
        scanf("%d",&mpop);
        printf("How many cola do you want? : ");
        scanf("%d",&mcola);
        total=mpop*pop+mcola*cola;
        printf("\tOK!!! This success total of popcorn and cola : %d Bath\n",total);
        total2=total+a*150;
        printf("\tTotal of all which you have to pay : %d Bath\n",total2);
        printf("*****Please pay money at counter.......Thank you for using our service ENJOY THE MOVIE.*****");
      }
      else
      {
       total3=a*150;
       printf("Total of all which you have to pay : %d Bath\n",total3);
       printf("*****Please pay money at counter.......Thank you for using our service ENJOY THE MOVIE.*****");
       }
      }
      else if(t>=3&&t<4)
      {
       printf("\t\t  1 2 3 4 5 6 7 8 9");
       for(k=0;k<5;k++)
      {
        printf("\n\t\t%d ",k+1);
        for(l=0;l<9;l++)
        {
         printf("%d ",seat3[k][l]);
 
        }
       }
      printf("\nHow many seat do you want? : ");
       scanf("%d",&c);
       for(d=0;d<c;d++)
      {
        printf("\n What row do you want? : ");
       scanf ("%d",&row3);
       printf(" What column do you want? : ");
       scanf ("%d",&column3);
       seat3[row3-1][column3-1]=1; 
 
      }
       printf("\n\n\t\tseat now\n\n");
      printf("\t\t  1 2 3 4 5 6 7 8 9");
      for(k=0;k<5;k++)
      {
       printf("\n\t\t%d ",k+1);
       for(l=0;l<9;l++)
       {
        printf("%d ",seat3[k][l]);
        }
       }
       int pop,cola,menu,mpop,mcola,total,total2,total3;
       printf("\n\nDo you want popcorn or cola?\n \tPopcorn 60 Bath\n \tCola    20 Bath\n Ans : 1)Yes 2)No\n");
       printf("Choose : ");
       scanf("%d",&menu);
       if(menu>=1&&menu<2)
       {
        pop=60;
        cola=20;
        printf("How many popcorn do you want? : ");
        scanf("%d",&mpop);
        printf("How many cola do you want? : ");
        scanf("%d",&mcola);
        total=mpop*pop+mcola*cola;
        printf("\tOK!!! This success total of popcorn and cola : %d Bath\n",total);
        total2=total+c*200;
        printf("\tTotal of all which you have to pay : %d Bath\n",total2);
        printf("*****Please pay money at counter.......Thank you for using our service ENJOY THE MOVIE.*****");
      }
      else
      {
       total3=c*200;
       printf("Total of all which you have to pay : %d Bath\n",total3);
       printf("*****Please pay money at counter.......Thank you for using our service ENJOY THE MOVIE.*****");
       }
      }
      else
      {
       printf("********Sorry we have 3 theater for this movie now please try again********");
     }
      
       }
       else 
    { 
      printf("********We have 3 movie now please try to select********");
     }
     
     
 getch();
}
