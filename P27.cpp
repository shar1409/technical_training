#include<iostream>
using namespace std;
int min(int a,int b)
{
if(a<b)
return 0;
else
return 1;
}
int main(){
    int a,b,x;
    cout<<"Enter num1 and num2:";
    cin>>a>>b;
    x=min(a,b);
    if(x==0)
    cout<<a <<"is minimum";
    else
    cout<<b <<"is minimum";
    return 0;
}