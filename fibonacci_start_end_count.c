#include<stdio.h>
int fibonacci(int s,int e)
{
   int sum,i,a=0,b=1,count=0;
   while(1){
    if(a>=s && a<=e){
    count++;
    }
     sum=a+b;
    a=b;
    b=sum;
    if(a>e)
    break;
   }
   return count;
}
int main()
{
    int s,e,z;
    scanf("%d%d",&s,&e);
    z=fibonacci(s,e);
    printf("%d",z);
    return 0;
}