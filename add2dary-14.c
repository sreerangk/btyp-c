#include<stdio.h>
int main(){
    int i,j,limit,a[100][100],b[100][100],c[100][100];
    printf("enter the limit of array");
    scanf("%d",&limit);
    printf("enter the first array value\n");
    for(i=1;i<=limit;i++){
        for(j=1;j<=limit;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value of array 2:");
    for(i=1;i<=limit;i++){
        for(j=1;j<=limit;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("arrya-1\n");
    for(i=1;i<=limit;i++){
        for(j=1;j<=limit;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("arrya-2\n");
    for(i=1;i<=limit;i++){
        for(j=1;j<=limit;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("Sum of 2 arrays is:\n");
    for(i=1;i<=limit;i++){
        for(j=1;j<=limit;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
   
}