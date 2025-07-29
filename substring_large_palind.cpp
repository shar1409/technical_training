#include<iostream>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
using namespace std;
int ispalindrome(string s1){
    int i,flag=0,l=0;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]!=s1[s1.length()-i-1]){
            flag=1;
        }
    }
    if(flag==0)
    for(i=0;s1[i]!='\0';i++){
        l++;
    }
    return l;
}
int main(){
    int i,j,len=0,l,max=INT_MIN;
    string s,s1,pal;
    cout<<"Enter a string: ";
    std::getline(std::cin,s);
    for(i=0;s[i]!=0;i++){
        len++;
    }
    for(i=0;i<len;i++){
        for(j=i+1;j<=len;j++){
            s1=s.substr(i,j-i);
            // cout<<s1<<endl;
            l=ispalindrome(s1);
            if(l>max) {
                max=l;
                pal=s1;
            } 
        }
        }
        cout<<"Largest palindrome is :"<<pal;
    return 0;
}