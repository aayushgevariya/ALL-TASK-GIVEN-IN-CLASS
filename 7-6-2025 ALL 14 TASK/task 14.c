#include <stdio.h>
#include <conio.h>

int main()  

{

    float temperature;

    printf("Type the temperature in Celsius: ");

    scanf("%f", &temperature);

    if (temperature > 25) 
    
    {
    
        printf("Hot\n");
    
    } 
    
    else if (temperature >= 15 && temperature <= 25) 
    
    {
    
        printf("Warm\n");

    } 
    
    else 
    
    {
    
        printf("Cold\n");

    }

    return 0;

}