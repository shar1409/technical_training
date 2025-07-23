#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
#include<math.h>
int main()
{
    int i,j,m,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++){
            if(a[i]==b[j])
            printf("\n%d",a[i]);
        }
    }
    return 0;
}
