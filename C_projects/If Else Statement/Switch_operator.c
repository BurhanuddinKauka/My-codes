// #include<stdio.h>

// int main() {
//     int day; // 1-monday, 2-tuesday, 3-wednesday, 4-thursday, 5-friday, 6- saturday, 7-sunday 
//     printf("Enter day (1-7): ");
//     scanf("%d", &day);

//     switch (day)
//     {
//     case 1: printf("Monday \n");
//         break;
//     case 2: printf("Tueday \n");
//         break;
//     case 3: printf("Wednesday \n");
//         break;
//     case 4: printf("Thursday \n");
//         break;
//     case 5: printf("Friday \n");
//         break;
//     case 6: printf("Saturday \n");
//         break;
//     case 7: printf("Sunday \n");
//         break;
//     default: printf("Not a valid day!");
//         break;
//     }

// return  0;
// }



// For char

// #include<stdio.h>

// int main() {
//     char day; // m-monday, t-tuesday, w-wednesday, T-thursday, f-friday, s- saturday, S-sunday 
//     printf("Enter day (m-S): ");
//     scanf("%c", &day);

//     switch (day) {

//     case 'm': printf("Monday \n");
//         break;
//     case 't': printf("Tueday \n");
//         break;
//     case 'w': printf("Wednesday \n");
//         break;
//     case 'T': printf("Thursday \n");
//         break;
//     case 'f': printf("Friday \n");
//         break;
//     case 's': printf("Saturday \n");
//         break;
//     case 'S': printf("Sunday \n");
//         break;
//     default: printf("Not a valid day!");
//         break;
//     }

// return  0;
// }

#include<stdio.h>

int main()
{
    int age,weight; 
    printf("Enter Your age\n");
    scanf("%d", &age);
    
    printf("Enter Your weight\n");
    scanf("%d", &weight);

    switch (age)
    {
    case 18:
        printf("The age is 18\n");
        switch (weight)
        {
        case 55:
            printf("You are eligible for Army Training.");
            break;
        
        default:
            printf("You are not elibible for Army Training.");
            break;
        }
        break;
    case 22:
        printf("The age is 22\n");
         switch (weight)
        {
        case 60:
            printf("You are eligible for Army Training.");
            break;
        
        default:
            printf("You are not elibible for Army Training.");
            break;
        }
        break;
    case 24:
        printf("The age is 23\n");
         switch (weight)
        {
        case 65:
            printf("You are eligible for Army Training.");
            break;
        
        default:
            printf("You are not elibible for Army Training.");
            break;
        }
        break;

    default:
       printf("Your Age is not 18,22 and 24.\n");
        break;
    }   
    return 0;
}