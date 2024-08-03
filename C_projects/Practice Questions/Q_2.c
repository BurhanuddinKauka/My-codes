// Write a program to calculate area of a circle. (radius is given)

// # include<stdio.h>

// int main() {

//     float radius;
//     printf("Enter radius: ");
//     scanf("%f", &radius);

//     printf("The area of your circle is %f", 3.14 * radius * radius);
//     return 0;
// }


// Write a program to calculate simple interest.

# include<stdio.h>

int main() {

    float principal, interest_rate, time, final_amount;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &interest_rate);

    printf("Enter time period (In years): ");
    scanf("%f", &time);

    final_amount = (principal * interest_rate * time) / 100.0;
    printf("Your total interest is %f", final_amount);
    return 0;
}