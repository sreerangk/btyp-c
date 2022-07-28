#include<stdio.h>
int main(){
    int i,j,n;
    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
            if(i==j){
                printf("%d",j);
            }else
            {
                printf(" ");
                }
        }
        for(j=5;j>=1;j--){
            if(i==j){
                printf("%d",j);
            }else{
                printf(" ");
            }

        }
printf("\n");
    }
    for(i=5;i>=1;i--){
        for(j=1;j<=4;j++){
            if(j==i){
                printf("%d",j);
            }else{
                printf(" ");

            }
        }
        for(j=5;j>=1;j--){
            if(i==j){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}