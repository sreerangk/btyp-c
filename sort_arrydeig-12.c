#include<stdio.h>
int main(){
    int arr[100],limit,i,j,temp;
    printf("enter the size of array");
    scanf("%d",&limit);
    printf("enter the value of array ");
    for(i=1;i<=limit;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=limit;i++){
       for(j=i+1;j<=limit;j++){
           if(arr[i]<arr[j]){
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;  
           }
       }

    }
printf("sorted array");
for(i=1;i<=limit;i++){
    printf("%d,",arr[i]);
}
}