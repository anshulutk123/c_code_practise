#include<stdio.h>

int main()
{
    int i,j,temp;

    for (i=0;i<5;i++)
    { // printf("%d ",i);
        
        for(j=5;j>=5-i;j--)
        {  
            printf("%d ",j);   
            temp++; 
        }
        printf("\n");
    }

return 0;
}