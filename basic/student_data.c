#include<stdio.h>

int main()
{
    int phy,chem,math;
    float per,avg;

    printf("Enter the marks of Physics");
    scanf("%d",&phy);


    printf("Enter the marks of chemistry ");
    scanf("%d",&chem);

    printf("Enter the marks of Math");
    scanf("%d",&math);

    avg=(phy+chem+math)/3.0;

    printf("%.2f\n",avg);

    if(avg>90)
    printf("A grade");

    if(avg>80 && avg<90) 
    printf("B grade");

    if(avg>70 && avg<80)
    printf("c grade");

    if(avg>0 && avg<70)
    printf("c grade");


    return 0;

}