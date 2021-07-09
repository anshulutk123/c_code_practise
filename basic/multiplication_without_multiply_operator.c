#include<stdio.h>

int main()
{
    int a,b,i,product=0;
    scanf("%d%d",&a,&b);

    for (i=1;i<=b;i++)
    {
        product=product+a;
    }

    printf("%d",product);
    return 0;
}