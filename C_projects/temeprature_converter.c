#include<stdio.h>

int main() {

    char unit;
    float temp;

    printf("Enter the unit which you want to convert (C or F): ");
    scanf("%c", &unit);

    if (unit == 'c') {
        printf("enter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("Your tempreture is %.1f", temp);
    }

    else if (unit == 'f') {
        printf("enter the temperature in Farenheit: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5/9;
        printf("Your tempreture is %.1f", temp);
    }

    else {
        printf("Please Enter a valid unit!");
    }

return  0;
}