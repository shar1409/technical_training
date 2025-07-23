#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[100];
    int i,len=0,flag=0;
    printf("Enter a string:");
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(!isupper(s[i]))
        toupper(s[i]);
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=s[len-i-1])
        {
        flag=1;
        break;
        }
    }
    if(flag==0)
    printf("Its palindrome");
    else
    printf("Its not a palindrome");
    return 0;
}