#include <stdio.h>
#include <conio.h>

int main() 

{
    
    int age;
    
    float ticketPrice;

    printf("Enter the age: ");
   
    scanf("%d", &age);

    if (age < 0)
    
    {
    
        printf("Invalid age.\n");
   
        return 1; 

    } 
    
    else if (age <= 12) 
    
    {
 
        ticketPrice = 5;
 
        printf("Child ticket price: $%.2f\n", ticketPrice);
 
    }
    else if (age <= 64)
    
    {
    
        ticketPrice = 10;
    
        printf("Adult ticket price: $%.2f\n", ticketPrice);

    }
    
    else 
    
    {
 
        ticketPrice = 7;
 
        printf("Senior ticket price: $%.2f\n", ticketPrice);
 
    }

    return 0;

}