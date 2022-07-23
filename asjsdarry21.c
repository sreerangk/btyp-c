#include<stdio.h>
int main(){
    int i,j,size,a[100],b[100];
    printf("Enter the array limit ");
    scanf("%d",&size);
    printf("enter the values ");
    for(i=1;i<=size;i++){
        scanf("%d",&a[i]);
    }
     for(i=1;i<size;i++){
        b[i]=a[i]*a[i+1];
        printf("%d\t",b[i]);
     }

}