#include<stdio.h>
#include<math.h>
int main(){
    float x,y,z;
    printf("\nEnter x and y:");
    scanf("%f%f",&x,&y);
    z=(sin(x)+cos(y))/tan(x);
    z1=sqrt((log(x)+exp(y))/log10(x));
    z2=(pow(log(x),y)+pow(exp(x),y))/pow(x,y);
    printf("soln is %f",z);
    return 0;
}