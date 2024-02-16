#include <stdio.h>


int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
 {
 
    int size = input_array_size();

    
    int array[size];

   
    input_array(size, array);

    
    int sum = sum_composite_numbers(size, array);

   
    output(sum);

    return 0;
}


int input_array_size()
 {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}


void input_array(int n, int a[n]) 
{
    printf("Enter the array elements: ");
    for (int i = 0; i < n; ++i) 
    {
        scanf("%d", &a[i]);
    }
}


int sum_composite_numbers(int n, int a[n]) 
{
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        int currentNumber = a[i];

        if (currentNumber > 1) {
            
            for (int j = 2; j <= currentNumber / 2; ++j) 
            {
                if (currentNumber % j == 0) {
                    sum += currentNumber;
                    break;
                }
            }
        }
    }

    return sum;
}


void output(int sum)
 {
    printf("Sum of composite numbers in the array is: %d\n", sum);
}