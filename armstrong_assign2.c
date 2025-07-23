#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z,sum,i,s,e,d,r,count=0;
    printf("Enter 2 numbers s and e:");
    scanf("%d%d",&s,&e);
    for(i=s;i<=e;i++){
        x=i;
        y=i;
        z=i;
        d=0;
        sum=0;
        while(z>0){
            d++;
            z=z/10;
        }
        while(x>0){
            r=x%10;
            sum=sum+pow(r,d);
            x=x/10;
        }
        if(y==sum)
        count++;
        //printf("\n%d",y);
        
    }
    printf("Total no of armstrong numbers are:%d",count);

    return 0;
}