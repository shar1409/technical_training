#include<stdio.h>
int fact(int n,int f)
{
    if(n==0)
    return f;
    else
    {
        f=f*n;
        fact(n-1,f);
    }
}
int main()
{
    int n,f=1;
    scanf("%d",&n);
    int fac=fact(n,f);
    printf("factorial is %d",fac);
    return 0;
}