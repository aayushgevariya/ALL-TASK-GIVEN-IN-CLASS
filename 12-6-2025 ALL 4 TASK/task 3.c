#include<stdio.h>
#include<conio.h>

void main() 

{
    
    int number, digit, Minimum = 9;

    printf("Type a +ve number: ");
  
    scanf("%d", &number);

    while (number > 0) 

    {
   
        digit = number % 10;
  
        if (digit < Minimum)
        
        {
 
            Minimum = digit;
      
        }
   
        number = number / 10;

    }

    
    printf("Minimum digit is: %d\n", Minimum);

 
    getch();
}