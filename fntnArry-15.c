#include<stdio.h>
void getArray(int a[10],int s);
void displayArray(int a[10],int s);

int main(){
    int a[10],s;
    printf("enter the size to the array ");
    scanf("%d",&s);
    getArray(a,s);
    displayArray(a,s);
    return 0;
}
void getArray(int a[10],int s){
    int i;
    printf("enter the value of array ");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
}
void displayArray(int a[10],int s){
    int i;
    printf("enterd value is \n");
    for(i=0;i<s;i++){
        printf("%d",a[i]);
    }
}