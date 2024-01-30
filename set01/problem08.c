#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);

int main() {
    int n;
    n = input_array_size();

    int numbers[n];
    input_array(n, numbers);

    int sum = sum_n_array(n, numbers);

    output(n, numbers, sum);

    return 0;
}

int input_array_size() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int sum_n_array(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

void output(int n, int a[n], int sum) {
    printf("Entered numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("Sum of the entered numbers: %d\n", sum);
}