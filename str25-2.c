#include<stdio.h>
int main(){
    int i,j,limit;
    printf("enter the number ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=1;j<=i*2;j++){
            printf("%d",j);
        }
        printf("\n");
        for(j=1;j<=i*3;j++){
            printf("%d\n",j);
        }
    }
}