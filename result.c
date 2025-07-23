#include<stdio.h>
#include<math.h>
int main(){
    int p,m,c,total;
    float avg;
    printf("Enter marks in m p c:");
    scanf("%d%d%d",&m,&p,&c);
    if(m>35){
        if(p>35){
            if(c>35){
                total=m+p+c;
                avg=(float)total/3;
                printf("Result is pass");
                printf("\ntotal marks are:%d",total);
                printf("\navg marks are: %f",avg);
 
            }
            else
            printf("failed in chemistry");

        }
        else
        printf("failed in physics");

    }
    else
    printf("failed in maths");
    
    return 0;
}