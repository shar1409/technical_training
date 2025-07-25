#include<iostream>
using namespace std;
int evenOdd(int a)
{
    int z;
(a%2==0)? z=1 :z=0;
return z;
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