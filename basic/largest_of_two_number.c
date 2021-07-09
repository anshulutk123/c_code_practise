#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Enter two numbers");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
    {
        printf("Number 1 is greater than num 2");
    }
    else{
        printf("Number 2 is greater than number 1");
    }

    return 0;
}