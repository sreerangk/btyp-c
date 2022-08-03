#include<stdio.h>
int main(){
    int i,j,n;
    for(i=0;i<=5;i++){
        for(j=5;j>=i;j--){
            printf("*");
        }
        for(j=i;j>=0;j--){
            printf("%d",j);
        }
   
        for(j=1;j<=i;j++){
            
            printf("%d",j);
        }
    printf("\n");
    }
}