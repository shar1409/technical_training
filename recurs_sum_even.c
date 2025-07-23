#include<stdio.h>
int printSums(int n,int s)
{
    if(n==0)
    return s;
    else
    {
        if(n%2==0)
        s=s+n;
        printSums(n-1,s);
    }
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    sum=printSums(n,sum);
    printf("%d",sum);
    return 0;
}