#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int x,y,n=5;
    srand(time(0));
    y=(rand()%100)+1;
    while(n>0)
    { 
        printf("Enter a number:");
        scanf("%d",&x);
        if(x<y)
        {
        n--;
        printf("Your number is lesser\n");
        }
        else if(x==y)
        {
          printf("\nYou win\n");
          break;
        }
        else
        {
        n--;
        printf("your number is greator\n");
        }
        
    }   
    printf("you lose");
    return 0;
}