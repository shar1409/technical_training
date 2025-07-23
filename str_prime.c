#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
#include<math.h>

int main()
{
    char s[100];
    int i,j,sum=0,n,l=INT_MIN,sm=INT_MAX,count=0,m=0,k;
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
        count=0;
        for(k=2;k<=sqrt(n);k++)
        {
            if(n%k==0)
            count++;
        }
        if(count==0){
            m++;
            //printf("%d\n",n);
        }
        }
    }
    printf("%d",m);
    // printf("largest is %d",l);
    // printf("\nsmallest is %d",sm);

    return 0;
}