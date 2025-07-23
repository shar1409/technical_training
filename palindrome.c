#include<stdio.h>
int main(){
    int n,sum=0,r,x;
    scanf("%d",&n);
    x=n;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(x==sum)
        printf("It is a palindrome");
    else
    printf("its not a plaindrome");
    
    return 0;
}