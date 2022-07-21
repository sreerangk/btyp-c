#include<stdio.h>

int main(){
 
    float mark;
    printf("enter the mark 0 to 100: ");
    scanf("%f",&mark);
    if(mark>100||mark<0){
    printf("please check you are entered number");
    }
    else if(mark>=50){
    printf("you got pass mark ");
    }
    else if (mark>=0){
    printf("your are fail");
    }
  
 
 
}