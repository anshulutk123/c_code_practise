#include<stdio.h>

int main()
{
    int i,j,temp;

    for (i=1;i<=5;i++)
    {
        // printf("%d ",i);
        temp=i;
        for(j=1;j<=i;j++)
        {  
            
            printf("%d ",temp);
            temp--;
            
        }
        printf("\n");
    }

return 0;
}