#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ud[100];
    int a=0,b=0,c=0,i,n,d=0,count=0;
    printf("Enter your userid:");
    scanf("%[^\n]s",ud);
    // gets(sn);
    for(i=0;ud[i]!='\0';i++)
    {
        count++;
    }
    if(count>=5){
        for(i=0;i<count;i++)
        {
            if(isspace(ud[i]))
            d++;
            else if(isdigit(ud[0]))
            c++;
            else if(isdigit(ud[i])||isalpha(ud[i])|| ud[i]=='_')
            a++;
            else
            b++;
        }
        if(c==0 && d==0 && b==0 && a>0)
        printf("valid");
        else
        printf("invalid");
    }
    else
    printf("invalid");
   
    return 0;
}
