#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=i;k++){
        if(i==1){
            for(j=1;j<=2;j++){
                printf("*\n");
            }
            
            }
            else{
                foe(j=1;j<=i;j++){
                    for(h=1;k<=i;k++){
                    printf("*");
                }printf("\n");
                }
            }
        }
            for(j=1;j<=i*3;j++){
                if(i%2==0){
                    printf("$");
                }else{
                    printf("*");
                }
            }
        
    }
}