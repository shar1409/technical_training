#include<stdio.h>
int main(){
    int s,e,sum=0;
    scanf("%d%d",&s,&e);
    while(s<=e)
    {
        if(s%2==0)
            sum=s+sum;
            s++;
          
    }
    printf("\nsum is %d",sum);
    return 0;
}