#include<stdio.h>
int myVar = 100;
int main(){
  int myVar = 20;
  int a = 10, b = 5, c = 2, d = 4;
  int result1, result2;
  printf("---Variable Scope Demonstration ---\n");
  printf("Value of myVar inside main(): %d\n", myVar);

   {
     //Block-level scope
     int myVar = 50;
     printf("Value of myVar inside the inner block: %d\n", myVar);
   }

   printf("\n--- Operator Precedence Demonstration ---\n");
  // Expression 1: Multiplication happens before addition
 //Evaluated as: 10+(5*2) = 10 + 10 =20
   result1 =a + b * c;
 // Expression 2: Parentheses alter the precedence
   // Evaluated as: (10 + 5)*2 = 15*2=30
   result2 = (a+b)*c;
   printf("Result of a + b * c: %d\n", result1);
   printf("Result of (a+b)*c: %d\n", result2);
    return 0;
}
