#include<stdio.h>
int main(){
    int k,i,j,size;
    printf("enter the size of piramid ");
    scanf("%d",&size);
    for(i=1;i<=size;i++){
        for(j=i;j<=size;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i==1||i==j){
                printf(" 1");
            }
            else
            printf(" %d",j);
        }
        printf("\n");
    }
}
