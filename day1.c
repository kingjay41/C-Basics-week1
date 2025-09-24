#include<stdio.h>
int main(){
char name[50];
int age;
char hobby[50];
printf("enter your name: ");
scanf("%s", name);
printf("enter your age: ");
scanf("%d", &age);
printf("enter your favorite hobby: ");
scanf("%s", hobby);
printf("Hello, %s. You are %d years old and your favourite hobby is %s.\n", name, age, hobby);
return 0;
}
