#include<stdio.h>
#include<conio.h>


void main()


{
   
    int n, i,Factorial = 1;

    printf("Type any number: ");
   
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    
    {
   
        Factorial = Factorial * i;
  
    }

    printf("Factorial of %d is: %d\n", n, Factorial);
  
  
  
    getch();
}