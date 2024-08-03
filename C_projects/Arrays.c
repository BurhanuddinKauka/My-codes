#include<stdio.h>

int main() {

    // array = a data structure that can store many values of the same data type.

    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};

    printf("%.1lf", prices[3]);

    return  0;
}


// arrays with loop

// #include<stdio.h>

// int main()
// {
//     double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 30.0};

//     // printf("%d bytes\n", sizeof(prices));

//     for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
//     {
//         printf("$%.2lf\n", prices[i]);
//     }

//     return  0;
// }



// 2D array

#include <stdio.h>

int main()
{
   // 2D array = an array, where each element is an entire array
   //            useful if you need a matrix, grid, or table of data
   /*
   int numbers[2][3] = {
                        {1, 2, 3},
                        {4, 5, 6}
                       };
   */
   int numbers[2][3];

   int rows = sizeof(numbers)/sizeof(numbers[0]);
   int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

   printf("rows: %d\n", rows);
   printf("columns: %d\n", columns);

   numbers[0][0] = 1;
   numbers[0][1] = 2;
   numbers[0][2] = 3;
   numbers[1][0] = 4;
   numbers[1][1] = 5;
   numbers[1][2] = 6;

   for(int i = 0; i < rows; i++)
   {
      for(int j = 0; j < columns; j++)
      {
         printf("%d ", numbers[i][j]);
      }
      printf("\n");
   }

   return 0;
}


// Array of string

#include <stdio.h>
#include <string.h>

int main()
{
   char cars[][10] = {"Mustang","Corvette","Camaro"};

   //cars[0] = "Tesla";
   strcpy(cars[0], "Tesla");

   for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
   {
      printf("%s\n", cars[i]);
   }

   return 0;
}