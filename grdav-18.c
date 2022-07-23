#include<stdio.h>
float main()
{
    float w,lab,assi,grad;
    printf("enter the mark scored by the students ");
    printf("\nwritten test = ");
    scanf("%f",&w);
    printf("\nlab exams=");
    scanf("%f",&lab);
    printf("\nassignments=");
    scanf("%f",&assi);
    grad=(w*70)/100+(lab*20)/100+(assi*10)/100;
    printf("%f grade of the student is ",grad);
}