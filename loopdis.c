#include<stdio.h>
int main(){
    int i,j,limit;
    printf("enter the number");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=limit;j>=i*2-1;j--){
            printf("*");
        }
        if(j<10-2){
        printf("\n");
        for(j=1;j<=i;j++){
            printf("*\n");
        }}
    }
}