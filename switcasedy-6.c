#include<stdio.h>
int main(){
    int day;
    printf("Enter a number");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thursday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("saturday");
        break;
        default:
        printf("Invalid Entry");
    }
}