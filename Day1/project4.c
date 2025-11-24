#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("Write the temperature in celsius: ");
    scanf("%f", &celsius);
       fahrenheit = (celsius * 9 / 5) +32;
    printf("in fahrenheit %f", fahrenheit);
    printf("write temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
       celsius = ( fahrenheit - 32) * 5/9;
    printf("in celsius %f", celsius);
    return 0;
}
