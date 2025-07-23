#include<stdio.h>
int evenOdd(int x)
{
    int z;
    if(x%2==0)
    z=1;
    else
    z=0;
return z;
  
}

int main(){
    int a,b;
    printf("Enter number:\n");
    scanf("%d",&a);
    b=evenOdd(a);
    if(b==1)
    printf("even");
    else
    printf("odd");
    
    return 0;
}