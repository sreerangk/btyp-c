/* C program to find all prime numbers from the inputted array */
#include<stdio.h>
#include<conio.h>
void main()
{
     int ar[100],i,n,j,counter,b=0,c=0;
     
     printf("Enter the size of the array ");
     scanf("%d",&n);
     printf("\n Now enter the elements of the array");
     for(i=0;i<n;i++)
     {
           scanf("%d",&ar[i]);
     }
     
     printf(" Array is -");
     for(i=0;i<n;i++)
     {
           printf("\t %d",ar[i]);
     }
     
     printf("\n All the prime numbers in the array are -");
     for(i=0;i<n;i++)
     {
           counter=0;
           if(ar[i]==0||ar[i]==1){
            counter=1;
            b=ar[i];
           }else
           for(j=2;j<ar[i];j++)
           {
                 if(ar[i]%j==0)
                 {
                       c=ar[j];

                       break;
                 }
                 
           }
           if(counter==0)
           {
                 printf("\t %d",ar[i]);
           }
            
              else{
            printf("%d",b);
           }
        
     }
     
     getch();
}