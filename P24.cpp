#include<iostream>
using namespace std;
int evenOdd(int a)
{
if(a%2==0)
return 1;
else
return 0;
}
int main(){
    int a,x;
    cout<<"Enter num:";
    cin>>a;
    x=evenOdd(a);
    if(x==1)
    cout<<"Even";
    else
    cout<<"Odd";
    return 0;
}