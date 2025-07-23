#include<stdio.h>
#include<string.h>
#include<ctype.h>

int consonant(int size,char *s)
{
    int i,count=0;
   for(i=0;s[i]!='\0';i++)
   {
    if(isalpha(s[i]))
    {
        if(!(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
        count++;
        
   }}
    return count;
}
int main()
{
    char s[100],res,i,size;
    scanf("%s",s);
    size=strlen(s);
    res=consonant(size,s);
    printf("\nthere are %d consonants",res);
    
   
    return 0;

}