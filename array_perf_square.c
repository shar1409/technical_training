#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
#include<math.h>
int main()
{
    int i,r,j,n,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        r=sqrt(a[i]);
        m=r*r;
        if(a[i]==m)
        printf("\n%d",m);
        
        
    }
    return 0;
}
