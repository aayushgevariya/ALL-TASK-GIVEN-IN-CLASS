#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,num;
   
    printf("Enter Number");
    scanf("%d",&num);
    
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",i);        
        }
        printf("\n");
    }
    
    
    return 0;
}