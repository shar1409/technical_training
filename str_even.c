#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    int i,j,sum=0,n;
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
        if(n%2==0){
            printf("%d is even",n);
        }
        }
    }

    //printf("Sum is %d",sum);
    return 0;
}