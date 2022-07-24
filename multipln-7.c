#include<stdio.h>
int main(){
    int num,i,mul;
    printf("enter a number");
    scanf("%d",&num);
    printf("multiplication table is:");
    for(i=1;i<=10;i++){
        mul=i*num;
        printf("\n%d*%d=%d",i,num,mul);
    }
}