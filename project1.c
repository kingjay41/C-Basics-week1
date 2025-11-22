#include <stdio.h>
int main()
{
    char name[30];
    int age;
    char hobby[30];
    printf("Write your name: ");
    scanf("%s", name);
    printf("write your age: ");
    scanf("%d", &age);
    printf("enter your favourite hobby: ");
    scanf("%s", hobby);
    printf("Hello, %s. You turned %d years old your favourite hobby is %s.\n. name, age, hobby);
    return 0;
}
