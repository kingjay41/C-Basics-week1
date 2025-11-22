#include <stdio.h>
int main(){
    float num1, num2, result;
    char op;
    printf("Enter first number: ");
    scanf("%f",  &num1);
    printf("Now enter second number: ");
    scanf("%f", &num2);
    printf("lastly choose operation(+,-,*,/): ");
    scanf("%c", &op); 
    switch(op){
     case '+':
      result = num1 + num2;
       break;
     case '-':
      result = num1 - num2;
       break;
     case '*':
      result = num1 * num2;
       break;
     case '/':
      result = num1 / num2;
     }
    printf("result = %.f", result);
    return 0;
}
 
