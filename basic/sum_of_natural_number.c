#include<stdio.h>

int main()
{
    int sum=0,i,n;
    printf("Enter the number till which you want to sum:");
    scanf("%d",&n);


    for (i=1;i<=n;++i)
    {
        sum=sum+i;
    }
    printf("The sum of %d natural number is %d",n,sum);
}