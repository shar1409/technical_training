#include<stdio.h>
#include<math.h>
int main(){
    float x,y,z;
    printf("\nEnter x and y:");
    scanf("%f%f",&x,&y);
    z=(log(x)+log10(x)+exp(x))/sqrt(y);
    printf("soln is %f",z);
    return 0;
}