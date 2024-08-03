#include<stdio.h>

void birthday(char name[] , int age) // This is called parameters.
{
   printf("Happy birthday dear %s!\n", name);
   printf("You are %d years old", age);
}
   
int main()
{
   char name[] = "Bro";
   int age = 21;

   birthday(name, age); // This is called arguments.

return  0;
}