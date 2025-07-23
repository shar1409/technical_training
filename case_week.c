#include<stdio.h>
int main(){
    int w;
    printf("enter a value from 1 to 7:");
    scanf("%d",&w);
    switch(w)
    {
        case 1:
        printf("Monday");
        
        case 2:
        printf("tuesday");
        
        case 3:
        printf("wednesday");
        
        case 4:
        printf("thursday");
        
        
        case 5:
        printf("friday");
        
        
        case 6:
        printf("saturday");
        
        case 7:
        printf("sunday");
        
        default:
        printf("INvalid");
        break;
    }
    return 0;
   
}