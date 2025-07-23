#include<stdio.h>
#include<math.h>
int Prime(int x)
{
    int i,z,count=0;
    for(i=2;i<sqrt(x);i++){
        if(x%i==0)
        count++;
    }
    if(count==0)
        z=0;
    else
    z=1;
    
return z;
  
}

int main(){
    int a,b;
    printf("Enter number:\n");
    scanf("%d",&a);
    b=Prime(a);
    if(b==0)
    printf("prime");
    else
    printf("not prime");
    
    return 0;
}