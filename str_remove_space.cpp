#include<iostream>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
using namespace std;

char* without_space(char *x,int len)
{
    int count=0,i,j;
    char *y=(char*)malloc(len*sizeof(char));
    for(i=0;x[i]!='\0';i++)
    {
            if(!(isspace(x[i])))
             y[count++]=x[i]; 
    }
    y[count]='\0';
    y=(char *)realloc(y,count*sizeof(char));
    return y;
    }
int main()
{
    int i,n=0;
    char *p=(char*)malloc(1000*sizeof(char));
    gets(p);   
    for(i=0;p[i]!='\0';i++)
    {
        n++;
    }
    char *q=without_space(p,n);
    puts(q);
    return 0;
}