#include<stdio.h>
int main(){
    int number1;
    float number2,sum;
    printf("enter a number\n");
    scanf("%d",&number1);
    printf("enter the second number\n");
    scanf("%f",&number2);
    sum=number1+number2;
    printf("sum of number is:%f",sum);
}