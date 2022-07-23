#include<stdio.h>
void getArray(int a[100][100],int b[100][100],int limit);
void addArray(int a[100][100],int b[100][100],int c[100][100],int limit);
void displayArray(int a[100][100],int b[100][100],int c[100][100],int limit);

int main(){
    int limit,a[100][100],b[100][100],c[100][100];
    printf("Enter the array limit:\n");
    scanf("%d",&limit);
    getArray(a,b,limit);
    addArray(a,b,c,limit);
    displayArray(a,b,c,limit);
}
void getArray(int a[100][100],int b[100][100],int limit){
    int i,j;
    printf("enter the value of array-1:\n");
    for(i=1;i<=limit;i++){
        for(j=1;j<=limit;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value of array-2:\n");
    for(i=1;i<=limit;i++){
        for(j=1;j<=limit;j++){
        scanf("%d",&b[i][j]);
        }
    }
}
void addArray(int a[100][100],int b[100][100],int c[100][100],int limit){
    int i,j;
     for(i=1;i<=limit;i++){
        for(j=1;j<=limit;j++){
        c[i][j]=a[i][j]+b[i][j];
        }
    }

}
void displayArray(int a[100][100],int b[100][100],int c[100][100],int limit){
    int i,j;
     for(i=1;i<=limit;i++){
        for(j=1;j<=limit;j++){
            printf("%d",&c[i][j]);
        }
        printf("\n");
    }
}