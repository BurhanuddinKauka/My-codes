// #include<stdio.h>

// int main() {

//     int number;
// printf("Enter a number: ");
// scanf("%d", &number);

//     if (number % 2 == 0){
//         printf("Even");
//     }

//     if (number % 2 != 0){
//         printf("Odd");
//     }

// return  0;
// }

// Write a programme to check if a year taken by user is a leap year or not?

// #include<stdio.h>

// int main() {

//     int year;

//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if (year % 4 == 0){
//         printf("Leap year!");
//     }

//     else {
//         printf("Not a Leap year");
//     }

// return  0;
// }

// Write a programme to check if a number taken by the user is a absolute no. or not if the number is not a absolute number convert it!

// #include<stdio.h>

// int main() {

//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (number < 0){
//         number *= -1;
//     }

//     printf("The absolute number is: %d", number);
// return  0;
// }

// Ques : Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater
// than its perimeter.

// #include<stdio.h>

// int main() {
//     int length, breath;
//     printf("Enter the length of rectangle: ");
//     scanf("%d", &length);

//     printf("Enter the breath of rectangle: ");
//     scanf("%d", &breath);

//     int area = length * breath;
//     int peremeter = 2 * (length + breath);

//     if (area > peremeter){
//         printf("The area of rectangle is bigger\n");
//     }

//     else {
//         printf("The area of rectangle is not bigger than perimeter\n");
//     }
// return  0;
// }

// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n%5 == 0 && n%3 == 0){
//         printf("The number is divisible with 3 and 5");
//     }

//     else{
//         printf("The number is not divisible with 3 and 5");
//     }
// return  0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b, c, d;

//     printf("Enter a: ");
//     scanf("%d", &a);

//     printf("Enter b: ");
//     scanf("%d", &b);

//     printf("Enter c: ");
//     scanf("%d", &c);

//     printf("Enter d: ");
//     scanf("%d", &d);

//     if (a > b && a > c && a > d)
//     {
//         printf("a is greater");
//     }

//     if (b > a && b > c && b > d)
//     {
//         printf("b is greater");
//     }

//     if (c > a && c > b && c > d)
//     {
//         printf("c is greater");
//     }

//     if (d > a && d > b && d > c)
//     {
//         printf("d is greater");
//     }

//     return 0;
// }



// #include<stdio.h>

// int main() {
    
//     int ram, shyam, ajay;
//     printf("Enter age of ram: ");
//     scanf("%d", &ram);

//     printf("Enter age of shyam: ");
//     scanf("%d", &shyam);

//     printf("Enter age of ajay: ");
//     scanf("%d", &ajay);

//     if (ram < shyam && ram < ajay){
//         printf("Ram is the youngest");
//     }

//     if (shyam < ram && shyam < ajay){
//         printf("Shyam is the youngest");
//     }
    
//     if (ajay < ram && ajay < shyam){
//         printf("Ajay is the youngest");
//     }
    
// return  0;
// }



// #include<stdio.h>

// int main() {
//     int ram, shyam, ajay;
//     printf("Enter age of ram: ");
//     scanf("%d", &ram);

//     printf("Enter age of shyam: ");
//     scanf("%d", &shyam);

//     printf("Enter age of ajay: ");
//     scanf("%d", &ajay);

//     if (ram < shyam){
        
//         if (ram < ajay)
//             printf("ram is youngest");
//         else 
//             printf("ajay is youngest");
        
//         }

//     else{
        
//         if (shyam < ajay)
//             printf("shyam is youngest");
//         else
//             printf("ajay is youngest");
//     }
    
//     return  0;
// }



// #include<stdio.h>

// int main() {

//     double x1, y1, x2, y2, x3, y3;
//     double m1 , m2;

//     printf("Enter the value of x1: ");
//     scanf("%lf", &x1);

//     printf("Enter the value of y1: ");
//     scanf("%lf", &y1);

//     printf("Enter the value of x2: ");
//     scanf("%lf", &x2);

//     printf("Enter the value of y2: ");
//     scanf("%lf", &y2);

//     printf("Enter the value of y3: ");
//     scanf("%lf", &y3);

//     m1 = (y2-y1)/(x2-x1);
//     m2 = (y3-y2)/(x3-x2);

//     if (m1 == m2){
//         printf("straight line");
//     }
//     else {
//         printf("Not a straight line");
//     }
// return  0;
// }



// // In this both int and float values are treated as same

// #include<stdio.h>

// int main() {
//     int x = 3;
//     float y = 3.0;

//     if (x==y){
//         printf("\nx and y are equal");
//     }
//     else{
//         printf("\nx and y are not equal");
//     }
// return  0;
// }



// In this code we check an interesting coding question as boolean data type

// #include<stdio.h>

// int main() {
//     int x = 3,y,z;
//     y = x = 10;
//     z = x < 10;

//     printf("\nx=%d y=%d z=%d", x,y,z);
// return  0;
// }


// #include <stdio.h>

// int main() {
//     for(int i = 2; i<=100; i++){
//         if (i%2!=0){
//             continue;
//         }
//     printf("%d ", i);
//     }
//   return 0;
// }


// #include<stdio.h>

// int main() {
//     int x = 4, y = 0, z;
//     while (x>= 0){
//         if (x==y)
//             break;
//         else
//             printf("\n%d %d", x, y);
//             x--;
//             y++;
//     }
// return  0;
// } 


// #include<stdio.h>

// int main() {
//     int n, sum, last_digit = 0;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     sum = 0;

    // while (n!= 0){
        
    //     last_digit = n % 10;
    //     if (last_digit % 2 != 0) {
    //         sum = sum + last_digit;
    //         }
    //         n = n / 10;
    // }

//     printf("%d", sum);
// return  0;
// }


// #include<stdio.h>

// int main() {
//     int n, r = 0;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     while(n>0){
//         r = r * 10;
//         r = r + (n % 10);
//         n = n / 10;
//     }
//     printf("The reverse of the number is %d", r);
// return  0; 
// }


// #include <stdio.h>

// int main() {
//     int num, r = 0, sum;
    
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     int temp = num; // store original number in temp variable
    
//     while (temp > 0) {
//         r = r * 10 + temp % 10;
//         temp = temp / 10;
//     }
    
//     sum = num + r;
    
//     printf("Sum of the number and its reverse is %d\n", sum);
    
//     return 0;
// }


// #include<stdio.h>

// int main() {
//     int n, product;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     product = 1;

//     for(int i =1; i<=n; i++){
//         product *= i;
//     }

//     printf("The factorial is : %d", product);
// return  0;
// }


// #include<stdio.h>

// int main() {
//     for (int i=65; i<=90; i++){
//     char ch = (char)i;
//     printf("%c ", ch);
//     printf("%d\n", i);
//     }
// return  0;
// }

// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);

//     // int m;
//     // printf("Enter number of columns: ");
//     // scanf("%d", &m);

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// return  0;
// }

// #include<stdio.h>

// int main() {
//     int num, r, sum= 0;

//     printf("Enter the number: ");
//     scanf("%d", &num);

//     while (num > 0){
//         r = num % 10;
//         sum = sum + r;
//         num = num / 10;
//     }
//     printf("%d", sum);
// return  0;
// }

// #include<stdio.h>

// int main() {
//     int n, m;
//     printf("Enter a number: ");
//     scanf("%d", &n);
    
//     printf("Enter a number: ");
//     scanf("%d", &m);

//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=m; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
        
// return  0;
// }


// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
    
//     // printf("Enter a number: ");
//     // scanf("%d", &m);
    
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=n+1-i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
        
// return  0;
// }


// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
    
//     // printf("Enter a number: ");
//     // scanf("%d", &m);
    
//     int a=n;
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=a; j++){
//             printf("* ");
//         }
//         a--;
//         printf("\n");
//     }
        
// return  0;
// }


// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
    
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j=j+2){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// return  0;
// }


// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(int i=1; i<=2*n-1; i=i+2){
//         for(int j=1; j<=i; j++){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }

// return  0;
// }

// #include<stdio.h>  
// int main()    
// {    
//  int i,fact=1,number;    
//  printf("Enter a number: ");    
//   scanf("%d",&number);    
//     for(i=1;i<=number;i++){    
//       fact=fact*i;    
//   }    
//   printf("Factorial of %d is: %d",number,fact);    
// return 0;  
// }   
    

#include<stdio.h>
int main() {
  int age = 21;
  char name[] = "Burhan";
  printf("hello %s\n", name);
  printf("Your age is %d", age);
}