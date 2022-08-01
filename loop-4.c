#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*\n");
        }
    
        for(j=1;j<=i*4;j++){
            printf("*");
        }
        printf("\n");
    }
}