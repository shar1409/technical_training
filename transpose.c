#include<stdio.h>
int main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    int b[c][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}