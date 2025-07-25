#include<iostream>
#include<stdlib.h>
#include<ctype.h>
using namespace std;

char* without_spl_char(char *x,int len)
{
    int count=0,i,j,flag;
    char *y=(char*)malloc(len*sizeof(char));
    for(i=0;x[i]!='\0';i++)
    {
            if((isalpha(x[i]))||(isdigit(x[i]))||(isspace(x[i])))
             y[count++]=x[i]; 
    }
    y[count]='\0';
    len=count;
    y=(char *)realloc(y,len*sizeof(char));
    return y;
    }
int main()
{
    int i,n=0;
    char *p=(char*)malloc(1000*sizeof(char));
    cin.getline(p,1000);   
    for(i=0;p[i]!='\0';i++)
    {
        n++;
    }
    p=(char*)realloc(p,n*sizeof(char));
    char *q=without_spl_char(p,n);
    cout<<q;
    return 0;
}