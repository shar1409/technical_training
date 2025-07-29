#include<iostream>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
using namespace std;
int more_digit(string s1){
    int i,flag=0,l=0;
    for(i=0;s1[i]!='\0';i++){
        if(isdigit(s1[i])){
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
            // cout<<s1<<endl;
            l=more_digit(s1);
            if(l>max) {
                if(s1.length()<min){
                max=l;
                sub=s1;
            } }
        }
        }
        cout<<"smallest substring with more digits is :"<<sub;
    return 0;
}