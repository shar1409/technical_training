#include<stdio.h>
#include<math.h>
int main(){
    int count,i,n,j,s,e,d=0;
    printf("enter s and e:");
    scanf("\n%d%d",&s,&e);
    for(j=s;j<=e;j++){
        count=0;
        for(i=2;i<=sqrt(j);i++){
            if(j%i==0)
            count++;

    }
    if(count==0)
    d++;
}
printf("total no of prime numbers b/w s and e are %d",d);
    return 0;
}