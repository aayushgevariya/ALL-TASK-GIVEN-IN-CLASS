#include <stdio.h>
#include <conio.h>

int main() 

{
    
    int num;
    
    printf("Enter an integer: ");
    
    scanf("%d", &num);
    
    if (num % 7 == 0) 
    
    {
        
        printf("%d is a multiple of 7.\n", num);
   
    } 
    
    else
    
    {
       
        printf("%d is not a multiple of 7.\n", num);
  
    }

}