#include<stdio.h>
int main(){
    int sum=0,limit,i;
    printf("enter the limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        if(i%2==1){
            sum=sum+i;
            printf("%d+",i);
        }
    }
        printf("=%d",sum);
    

}