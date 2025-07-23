#include<stdio.h>
#include<math.h>
int main(){
    int count,i,n,j,s,e;
    printf("enter s and e:");
    scanf("\n%d%d",&s,&e);
    for(j=s;j<=e;j++){
        count=0;
        for(i=2;i<=sqrt(j);i++){
            if(j%i==0)
            count++;
    }
    if(count==0)
    printf("\n%d",j);
    
}
    return 0;
}