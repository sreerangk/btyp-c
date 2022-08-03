#include<stdio.h>
int main(){
    int i,j,a[100],limit,flag,sum=0;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the value");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        flag=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                flag=1;
                break;
            }
        }
        
        if(flag==1){
            
            sum=sum+a[i];
           
        } 
    } printf("sum of non-prime number %d",sum);

}