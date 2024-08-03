#include<stdio.h>

int main() {
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);

    if (number >= 0) {
        printf("Positive \n");
        if (number % 2 == 0) {
            printf("Even");
            
        } else {
            printf("odd");
        }
        
    } else {
        printf("Negative");
    }    
    
return  0;
}