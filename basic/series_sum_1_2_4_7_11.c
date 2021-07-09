#include<stdio.h>

void main()
{
int p=1,sum=0;
for(int i=1;i<=5;i++)
{
printf("%d ",p);
sum=sum+p;
p+=i;
}
printf("\n%d",sum);

}