#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
#include<math.h>
int main()
{
    int s=0,i,j, x,n,count=0,r,sum=0,c=0,d=0;
    scanf("%d",&n);
    x=n;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==0)
    {
        while(n>0)
        {
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
        r=0;
        for(j=2;j<=sqrt(sum);j++)
        {
            if(sum%j==0)
            c++;
        }
        if(c==0)
        {
            int is_perfect_prime = 0;
            while(sum > 0) {
                r = sum % 10;
                if (r == 2 || r == 3 || r == 5 || r == 7) {
                    is_perfect_prime++;
                    break;
                }
                sum = sum / 10;
            }
            if(is_perfect_prime>0)
                printf("\n%d is a perfect prime number", x);
            else
                printf("\n%d is not a perfect prime number", x);
        }
        else
        printf("\n%d is not a perfect prime number",x);
    }
    else
    printf("\n%d is not a perfect prime number",x);
    return 0;
}