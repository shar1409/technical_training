#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a); 
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Before swapping, first number: %d\n",a);
    printf("Before swapping, second number: %d\n", b);
    a=a+b;//a=5,b=2,a=7
    b=a-b;//b=5
    a=a-b;//a=7-5=2
    printf("After swapping,first number:%d\n",a);
    printf("After swapping,second number:%d",b);
    return 0;
}