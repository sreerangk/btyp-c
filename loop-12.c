#include<stdio.h>
int main(){
    int l,i,j,k=1;
    printf("enter the limit");
    scanf("%d",&l);

    for(i=1;i<=l;i++){
     if(i%2==1){
            for(j=1;j<=5;j++){
                printf("*");
            }
            printf("\n");
            k=k+k;
            for(j=1;j<=k;j++){
                printf("*\n");
            }
    
            for(j=1;j<=10;j++){
                printf("*");
            }printf("\n");
     }
     else{
            k=k+k;
            for(j=1;j<=k;j++){
                printf("*\n");
            }
     }
    }
          
        
    }
