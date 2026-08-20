//Write a program to input two numbers and display their sum, difference, quotient, product.
#include <stdio.h>
int main() {
   int a, b;
   int sum, difference, product, quotient;
   printf("enter two numbers:");
   scanf("%d %d", &a, &b);
   sum = a + b;
   difference = a - b;
   product = a * b;
   quotient = a / b;
   printf("Sum = %d\n", sum);
   printf("Difference = %d\n", difference);
   printf("Product = %d\n", product);
   printf("Quotient = %d\n", quotient);
   return 0;
}
