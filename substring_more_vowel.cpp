#include<iostream>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
using namespace std;
int more_digit(string s1){
    int i,flag=0,l=0;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]=='A'||s1[i]=='a'||s1[i]=='e'||s1[i]=='E'||s1[i]=='i'||s1[i]=='I'||s1[i]=='o'||s1[i]=='O'||s1[i]=='u'||s1[i]=='U'){
            flag=flag+1;
        }
        else
        return 0;
    }
    return flag;
}
int main(){
    int i,j,len=0,l,max=INT_MIN,min=INT_MAX;
    string s,s1,sub;
    cout<<"Enter a string: ";
    std::getline(std::cin,s);
    for(i=0;s[i]!=0;i++){
        len++;
    }
    for(i=0;i<len;i++){
        for(j=i+1;j<=len;j++){
            s1=s.substr(i,j-i);
            l=more_digit(s1);
            if(l){
            if(l>max) {
                max=l;
                sub=s1;
             }}
             else
             cout<<"NONE";
            return 0;
        }
        }
        cout<<"substring with more vowels is :"<<sub;
    return 0;
}