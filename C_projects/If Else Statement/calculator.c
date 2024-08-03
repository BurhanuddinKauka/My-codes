#include<stdio.h>

int main() {

    char operator;
    double result;
    double number1;
    double number2;

    printf("Enter number1: ");
    scanf("%lf", &number1);

    printf("Enter a operator (+,-,*,/): ");
    scanf(" %c", &operator);

    printf("Enter number2: ");
    scanf("%lf", &number2);
    
    switch (operator) {
        case'+':
            result = number1 + number2;
            printf("your result is %.2lf", result);
            break;
            
        case'-':
            result = number1 - number2;
            printf("your result is %.2lf", result);
            break;

        case'*':
            result = number1 * number2;
            printf("your result is %.2lf", result);
            break;

        case'/':
            result = number1 / number2;
            printf("your result is %.2lf", result);
            break;

        default:
            printf("Enter a valid operator!");
            break;
    }

return  0;
}