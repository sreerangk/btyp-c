#include<stdio.h>
int main(){
    int i,j,k,limit,l;
    printf("enter the limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=1;j<=i;j++){   
            printf("*");}
            for(k=limit*2;k<=i;k++){
                printf("5");
            }
           
        
        printf("\n");
    }

}