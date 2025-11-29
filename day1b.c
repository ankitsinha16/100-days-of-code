//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int number1 , number2;
    int sum ,difference , product ,  quotient ;
    printf("enter a first number1  ");
    scanf("%d",&number1);
    printf("enter a second number2");
    scanf("%d",&number2);
    sum = number1  + number2;    
    printf("the sum of %d and %d is %d\n", number1, number2, sum);
    difference = number1 - number2;
    printf("the difference of %d and %d is %d\n",  difference,number1,number2 );
product = number1 * number2;
quotient =number1 / number2;
printf ("the product of %d and %d is %d", product,number1,number2 );
printf("the quotient  %d and %d is %d ",quotient, number2,number1  );
return 0;




}