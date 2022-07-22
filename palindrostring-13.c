#include<stdio.h>
int main(){
    char str[100];
    int i,length=0,flag=0;
    printf("enter a string ");
    scanf("%s", str);
    for(i=0;str[i] !='\0';i++){
        length++;
    }
    for(i=0;i<length;i++){
        if(str[i]!=str[length-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==1){
    printf("enterd string is not palindrom:");
    }
    else{
    printf("enterd string is palindrom:");
    }
}