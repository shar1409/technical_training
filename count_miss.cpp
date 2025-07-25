#include<iostream>
using namespace std;
int miss(char* str){
    int count=0,i;
    for(i=0;str[i]!='\0';i++){
        if(!((isalpha(str[i]))||(isdigit(str[i]))||(isspace(str[i]))))
        count++;
    }
    return count;
    }
int main(){
    char str[100];
    int x;
    cout<<"Enter a string : ";
    gets(str);
    cout<<str<<endl;
    x=miss(str);
    cout<<"Total misses :"<<x;

    return 0;

}