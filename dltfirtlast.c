#include<stdio.h>
int main(){
    int i,j,a[100],l,k;
    printf("entr the limit");
    scanf("%d",&l);
    printf("enter the value");
    for(i=1;i<=l;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=l;i++){
       
             // use if statement to check duplicate element
            if(a[i]==a[0]||a[i]==a[l]){
                 // delete the current position of the duplicate element
                 
                for(k=i;k<=l;k++){
                    a[k]=a[k+1];
                }
                // decrease the size of array after removing duplicate element

                l--;
                // if the position of the elements is changz 
               k--;
            
        }
    } 
    for(i=1;i<=l;i++){
        printf("%d",a[i]);
    }
}