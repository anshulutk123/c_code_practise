#include<stdio.h>

int main()
{
    int i,j,temp;

    for (i=1;i<=5;i++)
    {
        // printf("%d ",i);
        temp=i;
        for(j=i;j<=5;j++)
        {  
            
            printf("%d ",j);
            temp++;
            
        }
        printf("\n");
    }

return 0;
}