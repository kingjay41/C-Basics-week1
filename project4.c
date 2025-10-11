#include <stdio.h>
   int main(){
   float celsius, fahrenheit;
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);
     fahrenheit = (celsius * 9 / 5) + 32;
    printf("In fahrenheit %.1f\n", fahrenheit);
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("In celsius %.1f", celsius);
return 0;
}
