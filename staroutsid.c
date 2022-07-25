// *
// *
// ***
// **
// **
// ******
// ***
// ***
// ***
// *********
#include<stdio.h>
int main(){
    int i,j,k,l,h;
    printf("enter the limit");
    scanf("%d",&h);
    for(i=1;i<h;i++){
        if(i==1){
        for(j=1;j<=2;j++){
            for(l=1;l<=i;l++){
                printf("*");
            }
            printf("\n");
        }
        }
        else{
        for(j=1;j<=i;j++){
          for(l=1;l<=i;l++){
        
            printf("*");
        }
        printf("\n");
        }
        }
        for(k=1;k<=i*3;k++){
            printf("*");
        }
     printf("\n");
       
}}
