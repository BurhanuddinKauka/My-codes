// Write a program to calculate area of a square. (side is given)

# include<stdio.h>

int main(void) {

    int side;
    printf("Enter side: ");
    scanf("%d", &side);

    printf("The area of this square is %d", side * side);
    return 0;
}
