#include<stdio.h>
int main(){
    int i,j,n,z;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        z=1;
        for(j=1;j<=i;j++){
            
            printf("%d\t",z);
            z++;
        }
        printf("\n");
        
    }
    return 0;
}