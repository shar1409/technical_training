#include<stdio.h>
#include<math.h>
int main(){
    char a;
    printf("Enter a value:");
    scanf("%c",&a);
    if((a=='a'||'A')||( a=='i'||'I')||(a=='o'||'O')||(a=='u'||'U')||(a=='e'||'E'))
    {
        printf("it is vowel");

    }
    else{
        printf("Not a vowel");
    }
    return 0;
}