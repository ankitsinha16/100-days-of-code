#include<stdio.h>
int main (){
    int number1; 
    int number2 ;
    int sum ;
    printf("entner the first number1");
    scanf("%d",&number1);
    printf("enter the second number2");
    scanf("%d",&number2);
    sum = number1 + number2;
    printf("the sum of %d and %d is %d",number1,number2,sum);
    return 0;
}