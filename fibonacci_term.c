#include<stdio.h>
int fibonacci(int n)
{
    int s,i,a=0,b=1;
   for(i=0;a<=n;i++){
    if(a==n)
    return 1;
    s=a+b;
    a=b;
    b=s;
   }
   return 0;
}
int main()
{
    int n,z;
    scanf("%d",&n);
    z=fibonacci(n);
    if(z==1)
    printf("true");
    else
    printf("false");
    return 0;
}