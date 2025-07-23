#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char regno[100];
    int i,count=0;
    printf("Enter your regno:");
    scanf("%[^\n]s",regno);
    // gets(sn);
    for(i=0;regno[i]!='\0';i++){
        if(isupper(regno[i]))
        count++;
    }
    printf("%d",count);
    return 0;
}
