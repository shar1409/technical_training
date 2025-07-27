#include<iostream>
#include<ctype.h>
using namespace std;
char* upper(char *s)
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        s[0]=toupper(s[0]);
        if(isspace(s[i]))
        s[i+1]=toupper(s[i+1]);
    }
    return s;
}
int main(){
    char s[100];
    cout<<"Enter the string :";
    gets(s);
    char *x=upper(s);
    cout<<x;
    return 0;
}