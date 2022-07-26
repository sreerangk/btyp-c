#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            for(j=1;j<=3;j++){
                printf("*\n");
            }
            for(j=1;j<=i*2;j++){
                printf("*");
            }
            printf("\n");
        }
        else{
             for(j=1;j<=1;j++){
                printf("*\n");
            }
            for(j=1;j<=i*2;j++){
                printf("*");
            }
            printf("\n");
        }
    }
}