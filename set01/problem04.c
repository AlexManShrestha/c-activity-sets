#include<stdio.h>
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main() {
    int x, y, total;
    x = input();
    y = input();
    add(x ,y, &total);
    output(x, y, total);
    return 0;
}

int input() {
    int n;
    printf("enter the values : ");
    scanf("%d", &n);
    return n;
}


void add(int a, int b, int *sum) {
    *sum = a + b;
}

void output(int a, int b, int sum) {
    printf("the sum of %d and %d is %d\n", a, b, sum);
}