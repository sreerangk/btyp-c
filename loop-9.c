#include<stdio.h>
int main(){
    int i,j,k=1,l;
    printf("enter a number ");
    scanf("%d",&l);
    for(i=1;i<=l;i++){
        k=k+k;
        for(j=1;j<=k;j++){
            printf("*");   
        }
        printf("\n");
        for(j=1;j<=i*2-1;j++){
            printf("*\n");
        }
    }
}