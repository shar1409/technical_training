#include<iostream>
using namespace std;
int Vowel(char a)
{
if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u'){
return 1;}
else
return 0;
}
int main(){
    char a;
    int x;
    cout<<"Enter character:";
    cin>>a;
    x=Vowel(a);
    if(x==1)
    cout<<"Vowel";
    else
    cout<<"Not vowel";
    return 0;
}