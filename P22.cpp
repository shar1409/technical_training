#include<iostream>
#include<stdlib.h>
using namespace std;
bool evenOdd(int a){
if(a%2==0)
return true;
else
return false;
}
int main(){
    int a,x;
    cout<<"Enter num:";
    cin>>a;
    x=evenOdd(a);
    if(x==1)
    cout<<"True";
    else
    cout<<"False";
    return 0;
}