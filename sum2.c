#include<stdio.h>
int main(){
    int s,e,sum=0;
    scanf("%d%d",&s,&e);
    while(s<=e)
    {
        sum=sum+s;
        s++;
              
    }
    printf("\nsum is %d",sum);
    return 0;
}