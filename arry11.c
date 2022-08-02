#include<stdio.h>
int main(){
    int i,j,a[100],limit,k;
    printf("enter the elment ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=i;j<=limit;j++){
            printf("%d",j);
        }
        for(j=1;j<=i;j++){
            if(j%2==1){
                printf("*");
            }else{
                printf("$");
            }
    
            }    printf("\n");

    
}}