#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n||i==n/2+1)
        {
        for(j=1;j<=n;j++)
            printf("* ");   
        } 
        else if(i<n/2+1)
        {
            for(j=1;j<=n;j++)
            {
                
                if(j==n)
                printf("* ");
                else
                printf("  ");
            }
        }
        else{
             for(j=1;j<=n;j++)
            {
                
                if(j==1)
                printf("* ");
                else
                printf("  ");
            }
        }
    printf("\n");
    }
    return 0;
}