/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  
  int sub1, sub2;
  float sum , avg ;

  printf("Enter the first subject :");
  scanf("%d", &sub1);
   printf("Enter the first subject :");
  scanf("%d", &sub2);

  sum = sub1 + sub2;
  avg = sum /2;

  printf("Sum is :%.2f");
  printf("Avarage is :%.2f");
  
  return 0;
}

