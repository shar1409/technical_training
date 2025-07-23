#include<stdio.h>
int main(){
    int count=0,i,n;
    printf("enter number:");
    scanf("\n%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0)
        count++;
    }
    if(count==0)
    printf("It is a prime");
    else
    printf("its not a prime");
    return 0;
}