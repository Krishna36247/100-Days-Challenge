#include<stdio.h>
int main(){
  float length, breath, Perimeter, Area;
  printf("Enter length of the Rectangle: ");
  printf("Enter breath of the Rectangle: ");
  scanf("%f",&length);
  scanf("%f", &breath);
  Area= length*breath;
  Perimeter = 2*(length+breath);
  printf("Area of the Rectangle: %2f\n", Area);
  printf("Perimeter of the Rectangle: %2f\n", Perimeter);
  return 0;
}

