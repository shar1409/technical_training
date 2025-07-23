#include<stdio.h>
int main(){
    int s,e;
    scanf("%d%d",&s,&e);
    while(s<=e)
    {
        if(s%2==0){
            printf("\n%d\t",s);
            s++;
        }
           
    }
    return 0;
}