#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,sum=0,r,y;
    printf("Enter a number:");
    scanf("%d",&n);
    y=n;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
        if(y%sum==0)
        printf("It is a navie number");
        else
        printf("its not a navie number");    
    return 0;
}