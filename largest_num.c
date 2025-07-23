#include<stdio.h>
#include<math.h>
int main(){
    int n,r,l=0,s=10,sum=0,x;
    printf("Enter a number:");
    scanf("%d",&n);
    x=n;
    while(n>0){
        r=n%10;
        if(r<s)
        s=r;
        if(r>l)
        l=r;
        n=n/10;

    }
    sum=s+l;
    printf(" %d is sum",sum);
      
    return 0;
}