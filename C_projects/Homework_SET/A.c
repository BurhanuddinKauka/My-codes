/* Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.
*/

// #include<stdio.h>

// int main() {
//     float a; float b;
//     printf("Enter a: ");
//     scanf("%f", &a);

//     printf("Enter b: ");
//     scanf("%f", &b);

//     printf("%f perimtere of your rectangle is: ", 2 * (a + b));

// return  0;
// }


#include<stdio.h>

int main() {
    int n; int fact = 1; int numb = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    while (numb <= n) {
        fact = fact * numb;
        numb = numb + 1;
    }
    printf("%d", fact);
return  0;
}

// #include <stdio.h>
// int main()
// {
//     int n,i,f;
//     f=i=1;
//     printf("Enter a Number to Find Factorial: ");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         f*=i;
//         i++;
//     }
//     printf("The Factorial of %d is : %d",n,f);
//     return 0;
// }