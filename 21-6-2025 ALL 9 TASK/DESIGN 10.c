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
            
            printf("23");
            printf("\n");

            printf("456");
            printf("\n");
            
            printf("78910");
            printf("\n");

            printf("1112131415");
            printf("\n");

        }


    }
    
    
    getch();
}