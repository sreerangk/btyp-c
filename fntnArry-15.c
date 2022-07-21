//Write a program to add the values of two 2D arrays
#include<stdio.h>
void getArray(int a[10][10],int b[10][10],int s);
void addArray(int a[10][10],int b[10][10],int sum[10][10],int s);
void displayArray(int sum[10][10],int s);
int main(){
    int a[10][10],b[10][10],sum[10][10],s;
    printf("enter the size to the array ");
    scanf("%d",&s);
    getArray(a,b,s);
    addArray(a,b,sum,s);
    displayArray(sum,s);
    return 0;

}
void getArray(int a[10][10],int b[10][10],int s){
    int i,j;
    printf("enter the first array ");
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second array ");
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            scanf("%d",&b[i][j]);
        }
    }
   
}
void addArray(int a[10][10],int b[10][10],int sum[10][10],int s){
    int i,j;
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
}
void displayArray(int sum[10][10],int s){
    int i ,j;
    printf("the ontput is \n");
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");

    }
}