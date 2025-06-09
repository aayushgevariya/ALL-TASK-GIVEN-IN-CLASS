#include <stdio.h>
#include <conio.h>

int main() 

{
    
    printf("Numbers between 1 and 100 divisible by both 3 and 5 are:\n");

    for (int i = 1; i <= 100; i++) 
    
    {
       
        if (i % 3 == 0 && i % 5 == 0)
        
        {
        
            printf("%d\n", i);
        
        }
    
    }

    return 0;

}