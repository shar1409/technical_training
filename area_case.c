#include<stdio.h>
int main(){
    int s,b,n;
    float a;
    printf("\n1:areaof square\n2:areaof rectangle\n3:areaof circle\n4:areaof triangle");
    printf("\nenter a value n:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("\nenter side:");
        scanf("%d",&s);
        a=s*s;
        printf("\nArea of square is %f",a);
        break;

        case 2:
        printf("\nenter length and breadth:");
        scanf("%d%d",&s,&b);
        a=s*b;
        printf("\nArea of rectangle is %f",a);
        break;

        case 3:
        printf("\nEnter radius of circle:");
        scanf("%d",&s);
        a=3.14*s*s;
        printf("\nArea of circle is %f",a);
        break;
        
        case 4:
         printf("\nenter base and height:");
        scanf("%d%d",&b,&s);
        a=0.5*b*s;
        printf("\nArea of traingle is %f",a);
        break;
        
    
        default:
        printf("Invalid input");
        break;
    }
    return 0;
   
}