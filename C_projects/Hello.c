// #include<stdio.h>

// int main() {
//     printf("hello World!");
// return 0;
// }



// #include<stdio.h>

// int main() {

//     char unit;
//     float temprature;

//     printf("Enter the unit you want to convert in F` or C`: ");
//     scanf(" %c", &unit);

//     printf("Enter temprature: ");
//     scanf("%f", &temprature);

//     if(unit == 'C' || 'c'){
//         float celcius = (temprature - 32) * 5/9;
//         printf("Your temprature in celcius is: %.0f", celcius);
//     }

//     else if(unit == 'F' || 'f') {
//         float fahrenheit = (temprature * 9/5) + 32;
//         printf("Your temprature in celcius is: %.0f", fahrenheit);
//     }

//     else {
//         printf("Enter a valid unit!");
//     }

// return 0;
// }


#include<stdio.h>

int main() {

    int number_1, number_2;
    char operator = '+'; '-'; '*'; '/'; '%';
    int operand; 

    printf("Enter a number 1: ");
    scanf("%d", &number_1);

    printf("Enter a number 1: ");
    scanf("%d", &number_2);

    printf("Enter a operator: ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        operand = number_1 + number_2;
        printf("Your answer is %d", operand);
        break;
        
    case '-':
        operand = number_1 - number_2;
        printf("Your answer is %d", operand);
        break;

    case '*':
        operand = number_1 * number_2;
        printf("Your answer is %d", operand);
        break;

    case '/':
        operand = number_1 / number_2;
        printf("Your answer is %d", operand);
        break;

    case '%':
        operand = number_1 % number_2;
        printf("Your answer is %d", operand);
        break;
    
    default:
        break;
    }

return 0;
}