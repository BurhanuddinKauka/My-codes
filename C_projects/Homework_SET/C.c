// This program calculate the perimeter of the rectangle by taking user input

#include<stdio.h>

int main() {
    float a; float b;
    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("%f perimetere of your rectangle is: ", 2 * (a + b));

return  0;
}

// This program calculate cube by taking user input by n

#include<stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("%d", n * n * n);

return  0;
}