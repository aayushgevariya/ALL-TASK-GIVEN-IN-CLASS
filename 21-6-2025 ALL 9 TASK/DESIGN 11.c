#include<stdio.h>
#include<conio.h>

void main()

{

    int i,j,k;
    
    for(i=1;i<=5;i++)

    {

        for(j=1;j<=(5-i);j++)

        {

            printf(" ");

        }

        for(k=1;k<=i;k++)

        {

            printf("1");
            printf("\n");
            
            printf("01");
            printf("\n");

            printf("101");
            printf("\n");
            
            printf("1010");
            printf("\n");

            printf("10101");
            printf("\n");

        }


    }
    
    
    getch();
}