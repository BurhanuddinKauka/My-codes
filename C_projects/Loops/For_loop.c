// For loop

// #include<stdio.h>

// int main() {
    
// // for loop = repeats a section of code a limited amount of times
    
//     for (int i=1; i<=100; i=i+2) {      // start; condition; increment
//           printf("%d ", i);
//     } 

//     return  0;
//     }


// #include<stdio.h>

// int main() {
//     // int n;
//     // printf("Enter a number: ");
//     // scanf("%d", &n);

//     int a = 100;
//     for(int i=1; a>0; i++){
//         printf("%d ", a);
//         a = a -  3;
//     }
// return  0;
// }


// #include<stdio.h>

// int main() {
  
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     float a = 100;
//     for(int i=1; i<=n; i++){
//         printf("%.1f ", a);
//         a = a / 2;
//     }
// return  0;
// }



#include<stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=2; i<n; i++){
        if (n%i == 0){
            printf("%d is a composite number", n);
            return 0;
        }
    }
    printf("%d is a prime number", n);
return  0;
}