#include<stdio.h>
int main(){
    int P;
    float R,n,SI;
    printf("enter the principal amount: ");
    scanf("%d",&P);
    printf("enter the interest rate");
    scanf("%f",&R);
    printf("enter the number of year ");
    scanf("%f",&n);
    SI=(P*R*n)/100;
    printf("Simple interest :%f\n",SI);
    return 0;

}