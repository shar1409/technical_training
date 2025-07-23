#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter first number: ");
    scanf("%d",&a); 
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Before swapping, first number: %d\n",a);
    printf("Before swapping, second number: %d\n", b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping, first number: %d\n", a);
    printf("After swapping, second number: %d\n", b); 
    return 0;
}