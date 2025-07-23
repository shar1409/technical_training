#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char pass[100];
    int a=0,b=0,c=0,i,n,count=0,d=1;
    printf("Enter your password:");
    scanf("%[^\n]s",pass);
    // gets(sn);
    for(i=0;pass[i]!='\0';i++)
    {
        count++;
    }
    if(count>=8){
        for(i=0;pass[i]!='\0';i++){

            if(isupper(pass[i]))
            a++;
            if(islower(pass[i]))
            b++;
            if(!(isspace(pass[i])))
            d=0;
            if(!((islower(pass[i])) || (isupper(pass[i])) || (isalpha(pass[i])) || (isspace(pass[i]))||(isdigit(pass[i]))))
            c++;
        }
        if(a>0 && b>0 && c>0 && d>0)
        printf("valid");
        else
        printf("invalid");

    }
    else
    printf("invalid");
   
    return 0;
}
