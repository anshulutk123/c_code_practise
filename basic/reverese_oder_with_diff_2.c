#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the positive number");
    scanf("%d",&n);

    for(i=0;i<=n;i=i+2)
    {
        printf("%d",i);
    }
return 0;
}