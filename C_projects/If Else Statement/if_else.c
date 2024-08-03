#include<stdio.h>

int main() {
    
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Your are an adult");
    }

    else if(age == 0) {
        printf("You can't sign up! you were just born!");
    }

    else if (age < 0) {
        printf("You haven't been born yet!");
    }

    else {
        printf("You are not an adult!");
    }
    
return  0;
}