#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    printf("Enter two numbers:");
    scanf("%f%f",&a,&b);
    (a>b)?printf("%f is smaller",b):printf("%f is smaller",a);
    return 0;
}