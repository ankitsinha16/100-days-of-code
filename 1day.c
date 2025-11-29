#include<stdio.h>
int main(){
    int number1 , number2;
    int sum ,difference , product ,  quotient ;

    printf("enter first number: ");
    scanf("%d", &number1);

    printf("enter second number: ");
    scanf("%d", &number2);

    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    quotient = number1 / number2;

    printf("The sum of %d and %d is %d\n", number1, number2, sum);
    printf("The difference of %d and %d is %d\n", number1, number2, difference);
    printf("The product of %d and %d is %d\n", number1, number2, product);
    printf("The quotient of %d and %d is %d\n", number1, number2, quotient);

    return 0;
}
