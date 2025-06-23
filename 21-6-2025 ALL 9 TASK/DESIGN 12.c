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
            
            printf("4 4");
            printf("\n");

            printf("9 9 9");
            printf("\n");
            
            printf("16 16 16 16");
            printf("\n");

            printf("25 25 25 25 25");
            printf("\n");

        }


    }
    
    
    getch();
}