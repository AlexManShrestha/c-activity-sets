//2. Write a C program to add two numbers.
#include <stdio.h>
int main() 
{
    int num1, num2, sum=0;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum = %d\n", sum);
    return 0;
}