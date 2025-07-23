#include<stdio.h>
void fibonacci(int n,int a,int b)
{
    int s;
    if(n==0)
    return;
    else
    if(a<=n){
    printf("%d\t",a);
    s=a+b;
    a=b;
    b=s;
    fibonacci(n,a,b);
    }
}
int main()
{
    int n,a=0,s=0,b=1;
    scanf("%d",&n);
    printf("Fibonacci series is:");
    fibonacci(n,a,b);
    return 0;
}