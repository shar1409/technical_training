#include<stdio.h>
void fibonacci(int n)
{
    int s,i,a=0,b=1;
   for(i=0;a<=n;i++){
    printf("%d\t",a);
    s=a+b;
    a=b;
    b=s;
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Fibonacci series is:");
    fibonacci(n);
    // printf("factorial is %d",fac);
    return 0;
}