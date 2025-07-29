#include<iostream>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
using namespace std;
int isunique(string s1){
    int i,j;
    for(i=0;s1[i]!='\0';i++){
        for(j=i+1;s1[j]!='\0';j++){
            if(s1[i]==s1[j])
            return 0;
        }
        }
    return s1.length();
}
int main(){
    int i,j,len=0,l,max=INT_MIN;
    string s,s1,un;
    cout<<"Enter a string: ";
    std::getline(std::cin,s);
    for(i=0;s[i]!=0;i++){
        len++;
    }
    for(i=0;i<len;i++){
        for(j=i+1;j<=len;j++){
            s1=s.substr(i,j-i);
            l=isunique(s1);
            if(l>max) {
                max=l;
                un=s1;
            } 
        }
        }
        cout<<"Largest unique substring is :"<<un;
    return 0;
}