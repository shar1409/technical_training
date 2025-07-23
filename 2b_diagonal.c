#include<stdio.h>
int main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(j==i)
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }

    return 0;
}