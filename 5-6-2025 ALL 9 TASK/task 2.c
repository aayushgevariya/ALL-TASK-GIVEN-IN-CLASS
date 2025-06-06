#include<stdio.h>
#include<conio.h>

int main ()

{

  int a, b, c;

  printf("Input 3 integers: ");

  scanf("%d %d %d", &a, &b, &c);

  printf("\n-\n");

  printf("Original numbers: %d, %d, %d", a, b, c);

  printf("\nSorted numbers: ");

  if (a < b && b < c){
    
    printf("%d, %d, %d", a, b, c);
  
  }
  
  else
  
  {
  
    if (a < c && c < b)
    
    {
  
      printf("%d, %d, %d", a, b, c);
  
    }
  
    else
    
    {
  
      if (b < a && a < c)
      
      {
  
        printf("%d, %d, %d", b, a, c);
  
      }
  
      else
      
      {
  
        if (b < c && c < a)
        
        {
  
         printf("%d, %d, %d", b, c, a);
  
        }
  
        else
        
        {
  
          if (c < a && a < b)
          
          {
  
            printf("%d, %d, %d", c, a, b);
  
          }
  
          else
          
          {
  
            if (a < b && b < c)
            
            {
  
              printf("%d, %d, %d", a, b, c);
  
            }
  
            else
            
            {
  
              printf("%d, %d, %d", c, b, a);
  
            }
  
          }
  
        }
  
      }
  
    }
  
  }
  
}

