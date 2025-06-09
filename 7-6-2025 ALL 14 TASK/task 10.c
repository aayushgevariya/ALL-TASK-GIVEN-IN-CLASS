#include <stdio.h>
#include <stdbool.h>

bool isWithinRange(int num) 

{

    return (num >= 10 && num <= 50);

}

int main() 

{

    int number;

    printf("Enter a number: ");

    scanf("%d", &number);

    if (isWithinRange(number)) 
    
    {
    
        printf("%d is within the range of 10 to 50.\n", number);

    } 
    
    else 
    
    {
    
        printf("%d is not within the range of 10 to 50.\n", number);

    }

    return 0;
    
}