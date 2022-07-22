#include<stdio.h>
int main(){
    int arr[100],limit,i,count=0;
    printf("enter the size of array");
    scanf("%d",&limit);
    printf("enter the value of array ");
    for(i=1;i<=limit;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=limit;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    printf("number of even number is the given array is %d",count);
    
}