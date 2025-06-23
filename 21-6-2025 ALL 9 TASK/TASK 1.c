#include<stdio.h>
#include<conio.h>

void main()

{

    int marks[5];

    int i,sum=0,avg;

    for(i=0;i<5;i++)

    {

        printf("\n English");    
        scanf("%d",&marks[i]);
       
        printf("\n Telugu");
        scanf("%d",&marks[i]);

        printf("\n hindi");
        scanf("%d",&marks[i]);

        printf("\n science");
        scanf("%d",&marks[i]);

        printf("\n maths");
        scanf("%d",&marks[i]);

    }
    
     for(i=0;i<5;i++)

    {

         sum+= marks[i];

     }

      avg = sum/5;

     printf("\n Your Percentage is %d",avg);    
   
    
    getch();
}