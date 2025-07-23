#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    ((a>b)&&(a>c))?printf("%d is greator",a):(((b>a)&&(b>c))?printf("%d is greator",b):printf("%d is greator",c));
    return 0;
}