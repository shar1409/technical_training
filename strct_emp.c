#include<stdio.h>
// struct employee
union employee
{
    int id;
    float sal,exp;
    char name[100],dept[50];
}a;
int main(){
    // int t;
    printf("\nEnter name and dept:");
    scanf("%s%s",&a.name,&a.dept);
    printf("\nEnter id:");
    scanf("%d",&a.id);
    printf("\nEnter salary and experience:");
    scanf("%f%f",&a.sal,&a.exp);
    printf("\nName is %s",a.name);
    printf("\n department is %s",a.dept);
    printf("\nId is %d",a.id);
    printf("\nsalary is %f",a.sal);
    printf("\nexperience is %f",a.exp);
    return 0;
}