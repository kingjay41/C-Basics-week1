#include<stdio.h>
int main(){
float length, width, height, radius, volume;

float area, pi = 3.14;
printf("enter length: ");
scanf("%f", &length);
printf("enter width: ");
scanf("%f", &width);
area = length * width;
printf("Area of a Rectangle = %.2f\n", area);

printf("enter radius");
scanf("%f", &radius);
area = pi * radius * radius;
printf("Area of a circle = %.2f\n", area);

printf("enter radius: ");
scanf("%f", &radius);
printf("enter height: ");
scanf("%f", &height);
volume = pi * radius * radius * height;
printf("Volume of a Cylinder = %.2f", volume);
return 0;
}
