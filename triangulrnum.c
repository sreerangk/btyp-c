#include<stdio.h>
int main(){
    int i,d,j,k,h;
   printf("entr num");
   scanf("%d",&h);
    for(i=1;i<=h;i++){
        d=4;
        k=i;
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k=k+d;
            d--;
        }
        printf("\n");

        
    }
}