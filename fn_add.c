#include<stdio.h>
int add(int x,int y)
{
    int a;
    a=x+y;
    return a;
}
int subs(int x,int y)
{
    int b;
    b=x-y;
    return b;
}
int mult(int x,int y)
{
    int z;
     z=x*y;
    return z;
}
float div(int x,int y)
{
    float c;
    c=(float)x/y;
    return c;
}
int main(){
    int a,b,c,d,e;
    float f;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    d=subs(a,b);
    e=mult(a,b);
    f=div(a,b);
    printf("Addition of 2 numbers are %d\n",c);
    printf("subtraction of 2 numbers are %d\n",d);
    printf("multiplication of 2 numbers are %d\n",e);
    printf("division of 2 numbers are %f",f);
    return 0;
}