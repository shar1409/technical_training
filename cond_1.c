#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a value:");
    scanf("%d",&a);
    if(a>0){
        printf("%d is +ve ",a);
    }
    else
    printf("%d is -ve",a);
    
    return 0;
}