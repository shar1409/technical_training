#include<stdio.h>
#include<string.h>
int main(){
    char sn[100];
    printf("Enter your name:");
    // scanf("%s",&sn);
    gets(sn);
    printf("\nname=%s",sn);
    return 0;
}
