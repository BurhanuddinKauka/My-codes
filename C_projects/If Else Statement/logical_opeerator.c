#include<stdio.h>
#include<stdbool.h>

int main() {

    // logical operator = && (AND) checks if two conditions are true

    float temp = -25;
    bool sunny = true;

     if(temp >= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }

return  0;
}


#include <stdio.h>
#include <stdbool.h>  
 
int main(){
 
    // logical operators = || (OR) checks if at least one codition is true
    
    float temp = 25;

    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThe weather is good!");
    }
   
    return 0;
}



// Take a positive integer input and tell if it is a three digit number or not?

#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n<9 && n>1000){
        printf("The number is a three digit number");
    }

    else{
        printf("The number is not a three digit number");
    }
return  0;
}


// Ques: Take positive integer input and tell if it is divisible by 5 or 3.

#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n%5 == 0 || n%3 == 0){
        printf("The number is divisible with 3 or 5");
    }

    else{
        printf("The number is not divisible with 3 or 5");
    }
return  0;
}


// not operator in C

#include <stdio.h>
#include <stdbool.h>  
 
int main(){
 
    // logical operators = ! (NOT) reverses the state of a condition
    
    bool sunny = false;
    bool subscribed = true;
    
    if(!sunny){
        printf("\nIt's cloudy outside!");
    }
    else{
        printf("\nIt's sunny outside!");
    }

    return 0;
}