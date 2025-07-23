#include<stdio.h>
int main(){
    int a,b,n;
    float c;
    printf("enter a value n:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("\nenter two numbers:");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("\nAddition of a and b are %f",c);
        break;

        case 2:
        printf("\nenter two numbers:");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("\nSubtraction of a and b are %f",c);
        break;

        case 3:
        printf("\nenter two numbers:");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("\nMultiplication of a and b are %f",c);
        break;
        
        case 4:
        printf("\nenter two numbers:");
        scanf("%d%d",&a,&b);
        c=(float)a/b;
        printf("\nDivision of a and b are %f",c);
        break;
    
        default:
        printf("INvalid input");
        break;
    }
    return 0;
   
}