#include<stdio.h>
int main()
{
    float anual ,tax;
    printf("entee thr aniual income");
    scanf("%f",&anual);
    if (anual<=250000)
        printf("you have no tax ");
        else if (anual<=500000){
        tax=(anual*5)/100;
        printf("ncome tax amount =%f",tax);
        }
        else if(anual<=1000000)
        {
            tax=(anual*20)/100;
            printf("ncome tax amount =%f",tax);

        }
        else if(anual<=50000000)
        {
            tax=(anual*30)/100;
            printf("%f",tax);
        }
        else
        printf("please enter the amount below 5000000");
}
