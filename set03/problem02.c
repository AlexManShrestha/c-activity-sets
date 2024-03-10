#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3);
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result);

int main() 
{
    float x1, y1, x2, y2, x3, y3;
    int result;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);
    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3) 
{
    printf("Enter the coordinates of point 1 (x y): ");
    scanf("%f %f", x1, y1);
    printf("Enter the coordinates of point 2 (x y): ");
    scanf("%f %f", x2, y2);
    printf("Enter the coordinates of point 3 (x y): ");
    scanf("%f %f", x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)

 {
    float slope1, slope2;
    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);
    return slope1 != slope2;
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result)
 {
    if (result) {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    } else {
        printf("The points do not form a triangle.\n");
    }
}