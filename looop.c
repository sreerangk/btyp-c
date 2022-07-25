#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("print a num");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            for(k=1;k<=i*2;k++){
            printf("*");
        }
        printf("\n");
        }
    for(j=1;j<=3;j++){
        printf("*\n");
    }
    }
}