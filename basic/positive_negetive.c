#include<stdio.h>
#include<conio.h>

int main()
{   
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    if(num>0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("the number is negetive");
    }
    return 0;
}