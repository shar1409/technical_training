#include<stdio.h>
#include<math.h>

int main(){
    int d=0,x,y,n,r,sum=0;
    printf("enter number:");
    scanf("\n%d",&n);
    x=n;
    y=n;
    while(n>0){
        d++;
        n=n/10;
    }
    while(x>0){
        r=x%10;
        sum=sum+pow(r,d);
        x=x/10;
    }
    if(y==sum)
        printf("It is a armstrong number");
    else
        printf("its not a armstrong number");
    return 0;
}