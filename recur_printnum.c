#include<stdio.h>
int printNums(int n){
    if(n==0)
    return 0;
    else
    {
        printf("%d\t",n);
        printNums(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printNums(n);
    return 0;
}