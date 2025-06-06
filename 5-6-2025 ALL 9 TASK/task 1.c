#include <stdio.h>
#include <conio.h>

void main() 

{
  
  float basic_salary, bonus, gross_salary;

  printf("Enter basic salary: ");
  
  scanf("%f", &basic_salary);

  if (basic_salary <= 10000) 
  
  {
  
    bonus = basic_salary * 0.1;
  
  } else 
  
  {
  
    bonus = basic_salary * 0.2;
  
  }

  gross_salary = basic_salary + bonus;

  printf("Bonus: %.2f\n", bonus);
  
  printf("Gross salary: %.2f\n", gross_salary);

}