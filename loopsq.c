#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++){
        
            if(i==1||i==9||j==1||j==9||j==9+1-i||i==j){
                printf("*");
            }else
            printf(" ");
            
        }
        printf("\n");
    }
}