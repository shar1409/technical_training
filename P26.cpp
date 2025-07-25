#include<iostream>
using namespace std;
int Greatest(int a,int b)
{
if(a>b)
return 1;
else
return 0;
}
int main(){
    int a,b,x;
    cout<<"Enter num1 and num2:";
    cin>>a>>b;
    x=Greatest(a,b);
    if(x==1)
    cout<<a<<"is greator";
    else
    cout<<b <<"is greator";
    return 0;
}