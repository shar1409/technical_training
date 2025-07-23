#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
int main()
{
    char s[100];
    int i,j,sum=0,n,l=INT_MIN,sm=INT_MAX;
    printf("Enter a string:");
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        n=0;
        if(isdigit(s[i]))
        {
        n=s[i]-'0';
        for(j=i+1;s[j]!='\0';j++)
        {
            if(isdigit(s[j]))
            n=n*10+(s[j]-'0');
            else
            break;
           
        }
        i=j;
        if(n>l)
        l=n;
        if(n<sm)
        sm=n;
        }
    }

    printf("largest is %d",l);
    printf("\nsmallest is %d",sm);

    return 0;
}