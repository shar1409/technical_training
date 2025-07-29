#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main(){
    int i,j,len=0;
    string s,s1;
    cout<<"Enter a string: ";
    std::getline(std::cin,s);
    for(i=0;s[i]!='\0';i++){
        len++;
    }
    for(i=0;i<len;i++){
        for(j=i+1;j<=len;j++){
            s1=s.substr(i,j-i);
            cout<<s1<<endl;
        }
    }
    return 0;
}