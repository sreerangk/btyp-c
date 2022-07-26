#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i*2;j++){
            printf("*");
        }
        printf("\n");
        for(j=1;j<=i*3;j++){
            printf("*\n");
        }
    }
}
