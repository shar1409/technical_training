#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char strs[100];
    int i,sum=0;
    printf("Enter a string:");
    scanf("%[^\n]s",strs);
    for(i=0;strs[i]!='\0';i++)
    {
        if(isdigit(strs[i]))
        sum=sum+strs[i]-'0';
    }
    printf("Sum is %d",sum);
    return 0;
}