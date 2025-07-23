#include<stdio.h>
int main(){
    int count=0;i,n;
    printf("enter number:");
    scanf("\n%d",n);
    for(i=1;i<=n;i++){
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("It is a prime");
    elseprintf("its not a prime");
    return 0;
}