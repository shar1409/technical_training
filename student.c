#include<stdio.h>
#include<math.h>
int main(){
    int p,m,c,total;
    float avg;
    printf("Enter marks in m p c:");
    scanf("%d%d%d",&m,&p,&c);
    total=p+m+c;
    avg=total/3;
    if(avg>90){
        printf("grade is A+");
    }
    else if(avg>80){
        printf("grade is A");
    }
    else if(avg>70){
        printf("grade is B+");
    }
    else if(avg>60){
        printf("grade is B");
    }
    else if(avg>50){
        printf("grade is C");
    }
    else if(avg>40){
        printf("grade is D");
    }
    else if(avg>35){
        printf("grade is E");
    }
    else
    printf("Fail");
    return 0;
}