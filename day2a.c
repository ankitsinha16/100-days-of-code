// Write a program to calculate the area and perimeter of a rectangle
#include <stdio.h>

int main(void)
{
    int number1, number2;
    int area, perimeter;

    printf("Enter length: ");
    if (scanf("%d", &number1) != 1) {
        fprintf(stderr, "Invalid input for length\n");
        return 1;
    }

    printf("Enter breadth: ");
    if (scanf("%d", &number2) != 1) {
        fprintf(stderr, "Invalid input for breadth\n");
        return 1;
    }

    area = number1 * number2;
    perimeter = 2 * (number1 + number2);

    printf("Area of rectangle is %d\n", area);
    printf("Perimeter of rectangle is %d\n", perimeter);
    return 0;
}