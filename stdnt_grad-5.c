#include<stdio.h>
int main(){
    float mark;
    printf("enter your mark");
    scanf("%f",&mark);
    if(mark>100){
        printf("please enter mark 0 to 100");
    }
    else if(mark>=90){
        printf("Grade :A");
    }
    else if(mark>=80){
        printf("Grade :B");
    }
    else if(mark>=70){
       printf("Grade :C");
    }
    else if(mark>=60){
        printf("Grade :D");
    }
    else if(mark>=50){
        printf("Grade :E");
    }
    else if(mark>=0){
        printf("you are fail");
    }
    
    

}