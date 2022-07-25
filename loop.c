#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("entr the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i*3;j++){
           
                printf("*");
        }
            printf("\n");
        
        for(j=1;j<=i;j++){
            printf("*\n");
        }
    }
}