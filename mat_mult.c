#include<stdio.h>
#include<math.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;
    printf("Enter 1st matrix r1 and c1:");
    scanf("%d%d",&r1,&c1);
    printf("Enter 2nd matrix r2 and c2:");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1];
    int b[r2][c2];
    int z[c1][r2];
    if(c1==r2)
    {
        printf("\nEnter elements of 1st matrix:");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter elements of 2nd matrix:");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                z[i][j]=0;
                for(k=0;k<c1;k++)
                z[i][j]+=a[i][k]*b[k][j];
            }
        }
             for(i=0;i<r1;i++)
             {
            for(j=0;j<c2;j++){
            printf("%d\t",z[i][j]);
            }
            printf("\n");
             }
            }
    
    else
    printf("Matrix multiplication not possible");
    return 0;
}