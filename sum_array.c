#include<stdio.h>
int sum_array(int n,int *x,int *y)
{
    int sum=0,i;
    for(i=0;i<n;i++){
    sum=sum+x[i]+y[i];}
    return sum;
}
int main()
{
    int n,res,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    res=sum_array(n,a,b);
    printf("sum is %d",res);
    return 0;

}