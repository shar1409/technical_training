#include<stdio.h>
int main()
{
    int i,j,r,flag1=0,flag2=0;
    scanf("%d",&r);
    int a[r][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
        scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++){
            if(i==j)
            {
                if(a[i][j]=0)
                    flag1=1;
                
            }
            else
            {
                if(a[i][j]!=0)
                flag2=1;
            
            } 
        }
    }
    if(flag1==0 && flag2==0) 
    printf("diagonal matrix");
    else
    printf("not diagonal matrix");

    

    return 0;
}