#include <stdio.h>

int main()
{
    //1
    int i;
    int size;

    //2
    printf("How many numbers you want to enter : ");
    scanf("%d", &size);

    //3
    int array[size];

    //4
    for (i = 0; i < size; i++)
    {
       
        scanf("%d", &array[i]);
    }

    //5
    printf("Alternate elements of the input array : \n");
    for (i = 0; i < size; i ++)
    {
        printf("%d ", array[i]);
        i++;
    }
}