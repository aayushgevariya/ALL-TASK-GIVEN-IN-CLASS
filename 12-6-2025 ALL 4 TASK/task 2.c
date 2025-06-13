#include<stdio.h>
#include<conio.h>

int main()

{

    int number, digit, Maximum = 0;

    printf("Type any +ve value: ");

    scanf("%d", &number);

    while (number > 0) 
    
    {
    
        digit = number % 10;
    
        if (digit > Maximum) 
        
        {
        
            Maximum = digit;
    
        }
    
        number = number / 10;

    }

   
   
    printf("Maximum digit is: %d\n", Maximum);




 return 0;
 
}