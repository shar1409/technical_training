#include<stdio.h>
struct student
{
    int m1,m2,m3;
    float avg;
    char name[100];
}a;
int main(){
    int t;
    scanf("%s",a.name);
    scanf("%d%d%d",&a.m1,&a.m2,&a.m3);
    t=a.m1+a.m2+a.m3;
    a.avg=(float)t/3;
    printf("\nName is %s",a.name);
    printf("\n mark1 are %d",a.m1);
    printf("\nmark2 marks are %d",a.m2);
    printf("\nmark3 marks are %d",a.m3);
    printf("\nTotal marks are %d",t);
    printf("\navg  marks are %f",a.avg);
    return 0;
}