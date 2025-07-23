#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter value:");
    scanf("%d",&a);
    //(a%2==0)?printf("even"):printf("odd");
    ((a&1)==0)?printf("even"):printf("odd");
    
    return 0;
}