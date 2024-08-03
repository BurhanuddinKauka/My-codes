#include<stdio.h>
#include<math.h>

int main() {

    double a, b, c;

    printf("Enter a: ");
    scanf("%lf", &a);
    
    printf("Enter b: ");
    scanf("%lf", &b);

    c = sqrt(a*a + b*b);

    printf("Side c is %lf", c);
return  0;
}