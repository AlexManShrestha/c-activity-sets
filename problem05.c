#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main() {
    int x, y, z, largest;
    x = input();
    y = input();
    z = input();
    largest = compare(x, y, z);
    output(x ,y ,z, largest);
    return 0;
}

int input() {
    int n;
    printf("enter the values : ");
    scanf("%d", &n);
    return n;
}

int compare(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    }
    else if(b >= a && b >= c){
        return b;
    }
    else
    {
        return c;
    }
}   

void output(int a, int b, int c, int largest) {
    printf("the largest of %d and %d and %d is %d\n", a ,b ,c ,largest);
}