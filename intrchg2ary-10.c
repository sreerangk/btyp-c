#include<stdio.h>
int main(){
    int a[100],ab[100],i,j,value,temp[100];
    printf("enter size of array");
    scanf("%d",&value);
    printf("enter the first array");
    for(i=1;i<=value;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the 2nd array");
    for(i=1;i<=value;i++){
        scanf("%d",&ab[i]);
    }
    for(i=1;i<=value;i++){
        temp[i]=a[i];
        a[i]=ab[i];
        ab[i]=temp[i];
    }
    printf("Array-1 :");
    for(i=1;i<=value;i++){
        printf("%d,",a[i]);
    }
    printf("Array-2 :");
    for(i=1;i<=value;i++){
        printf("%d,",ab[i]);

    }
}