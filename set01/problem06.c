// Write C program to compare three numbers using pass by reference
#include<stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main() {
    int x, y, z, largest;
    x = input();
    y = input();
    z = input();
    compare(x, y, z, &largest);
    output(x ,y ,z, largest);
    return 0;
}

int input() {
    int n;
    printf("enter the values : ");
    scanf("%d", &n);
    return n;
}

void compare(int a, int b, int c, int *largest) {
    if(a >= b && a >= c){
        *largest = a;
    }
    else if(b >= a && b >= c){
        *largest = b;
    }
    else
    {
        *largest = c;
    }
}   

void output(int a, int b, int c, int largest) {
    printf("the largest of %d and %d and %d is %d\n", a ,b ,c ,largest);
}