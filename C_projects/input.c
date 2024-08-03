#include<stdio.h>
#include<string.h>

int main() {

    char name[25]; //bytes
    int age;

    printf("\nWhat's your name?");
    //scanf("%s", &name);
    fgets(name, 25, stdin);    //fgets(name of the variable, input size, standard input)
    name[strlen(name)-1] = '\0';    // by using #inlude<string.h> library.

    printf("How old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);

return  0;
}

 

// #include<stdio.h>

// int main() {
//     float P, T, R, SI;
//     printf("Enter the principal amount: ");
//     scanf("%f", &P);

//     printf("Enter the Time(In years): ");
//     scanf("%f", &T);
    
//     printf("Enter the Rate of Intererst: ");
//     scanf("%f", &R);

//     SI = (P * R * T) / 100;
//     printf("Your Interest is %1.f", SI);
// return  0;
// }