#include<stdio.h>
int main()
{
    int i,j,r,sum=0;
    scanf("%d",&r);
    int a[r][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++){
        scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<r;i++)
    {
        sum=sum+a[i][i];
        sum=sum+a[i][r-i-1];
        }
        printf("%d",sum);
    

    return 0;
}