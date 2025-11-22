#include <stdio.h>
int main(){
    int num1,num2;
    int difference;
    int sum;
    int product;
    double qoutient;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Emter second number: ");
    scanf("%d", &num2);
    printf("sum = %d\n", num1 + num2);
    printf("difference = %d\n", num1 - num2);
    printf("product = %d\n", num1 * num2);
    printf("quotient = %.2lf", num1 / num2);
    return 0;
}
