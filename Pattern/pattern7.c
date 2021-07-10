#include<stdio.h>

int main()
{
    int i,j,temp;

    for (i=0;i<=5;i++)
    {
        // printf("%d ",i);
        
        for(j=5;j>=j-i;j--)
        {  
            printf("%d ",j); 
            
        }
        printf("\n");
    }

return 0;
}