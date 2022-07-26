#include<stdio.h>
int main(){
    int i,j,k,l;
    char str[100];
    printf("enter a string");
    scanf("%s",str);
    l=strlen(str);
    if(l%2==0){
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
                if(j==i||j==5+1-i){
                    printf("*");
                }else
                printf(" ");
            }
        printf("\n");
        }
        
    }else{
        for(i=1;i<=6;i++){
            for(j=1;j<=6;j++){
                if(j==i||j==6+1-i){
                    printf("*");
                }else
                printf(" ");
            }
        printf("\n");

    }
}
}