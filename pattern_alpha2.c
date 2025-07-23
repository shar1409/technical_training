#include<stdio.h>
int main(){
    int i,j,n;
    char z;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        z='A';
        for(j=1;j<=i;j++){
            
            printf("%c\t",z);
            z++;
        }
        printf("\n");
        
    }
    return 0;
}