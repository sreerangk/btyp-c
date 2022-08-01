#include<stdio.h>
int main(){
    int i,j,n,l,k,a[100];
    printf("enter the limit of array ");
    scanf("%d",&l);
    printf("enter the valuse");
    for(i=1;i<=l;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=l;i++){
        for(j=i+1;j<=l;j++){
             // use if statement to check duplicate element
            if(a[i]==a[j]){
                 // delete the current position of the duplicate element
                 
                for(k=j;k<=l;k++){
                    a[k]=a[k+1];
                }
                // decrease the size of array after removing duplicate element

                l--;
                // if the position of the elements is changz 
                j--;
            }
        }
    } 
    for(i=1;i<=l;i++){
        printf("%d",a[i]);
    }
}