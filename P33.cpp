#include<iostream>
using namespace std;
int withdraw(int a,int t)
{
    int x;
if(a<=t){
    t=t-a;
    return t;
}
else
return 0;
}
int main(){
    int a,t=3000,x;
    cout<<"Enter num:";
    cin>>a;
    x=withdraw(a,t);
    if(x)
    cout<<"Available balance :"<<x;
    else
    cout<<"Insufficient balance";
    return 0;
}