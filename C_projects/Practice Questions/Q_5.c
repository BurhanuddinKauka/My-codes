#include<stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // if (marks > 30) {
    //     printf("PASS!");
    // }
    // else {
    //     printf("FAIL!");
    // }

    marks <= 30 ? printf("FAIL!") : printf("PASS!");
return  0;
}