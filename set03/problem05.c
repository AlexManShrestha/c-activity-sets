#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void eratosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main() {
    int n;

    n = input_array_size();
    int primeArray[n];

    init_array(n, primeArray);
    eratosthenes_sieve(n, primeArray);
    output(n, primeArray);

    return 0;
}

int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[n]) {
    for (int i = 2; i <= n; i++) {
        a[i] = 1; 
    }
}

void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i]) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0; 
            }
        }
    }
}

void output(int n, int a[n]) {
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (a[i]) {
            printf("%d, ", i);
        }
    }
    printf("\n");
}
