
#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
#include<math.h>
int main()
{
    int i,x=0,k,c,flag=0,j,n,count,l=INT_MIN,s=INT_MAX,isnotprime=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(k=2;k<=sqrt(a[i]);k++)
        {
            if(a[i]%k==0)
                count++;
        }
        if(count==0)
        {
            flag=1;
            if(a[i]<s)
            s=a[s];
            if(a[i]>l)
            l=a[l];   
        }
        if(flag==0 || s==l)
        printf("\nits a prime array");
    
        while(s<=l)
        {
            count=0;
            for(j=2;j<=sqrt(i);j++)
            {
                if(s%j==0)
                count++;
            }
            if(count==0)
            {
                c=0;
                for(i=0;i<=n;i++)
                {
                    if(s==a[i]);
                    x++;
                }
                if(c==0)
                {
                    isnotprime=1;
                    break;
                }
            }
            s++;
        }
        if(isnotprime==0)
        printf("\nPrime array");
        else
        printf("\nNot a prime array");
        return 0;


        }

    }