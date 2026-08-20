#include <stdio.h>
#include <math.h>
//stdio.h is standard header file for input and output functions 
// math.h is standard header file for mathematics functions 
int main(){
  float Pi = 3.14159; 
  float radius, area, circumference;
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);
  area= Pi*radius*radius;
  circumference = 2*Pi*radius;
  printf("Area of the circle: %.2f\n",area);
  printf("Circumference of the circle: %.2f\n", circumference);
   return 0;
}
