#include<stdio.h>
void getArray(int a[10][10],int b[10][10],int limit);
void addArray(int a[10][10],int b[10][10],int c[10][10],int limit);
void displayArray(int c[10][10],int limit);

int main(){
    int a[10][10],b[10][10],c[10][10],limit;
    printf("Enter the array limit:\n");
    scanf("%d",&limit);
    getArray(a,b,limit);
    addArray(a,b,c,limit);
    displayArray(c,limit);
    return 0;
}
void getArray(int a[10][10],int b[10][10],int limit){
    int i,j;
    printf("enter the value of array-1:\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value of array-2:\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
        scanf("%d",&b[i][j]);
        }
    }
}
void addArray(int a[10][10],int b[10][10],int c[10][10],int limit){
    int i,j;
     for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
        c[i][j]=a[i][j]+b[i][j];
        }
    }

}
void displayArray(int c[10][10],int limit){
    int i,j;
    printf("sum of array 1 and array 2 is :\n");
     for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}