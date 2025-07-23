#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
#include<math.h>
int main()
{
    int i,r,n,z=9;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]>0)
        {
        r=a[i]%10;
        if(r<z)
        z=r;
        a[i]=a[i]/10;
      } 

    }
    printf("Smallest value is %d",z);
    return 0;
}