#include<iostream>
using namespace std;
int positive(int a)
{
if(a>0)
return 1;
else
return 0;
}
int main(){
    int a,x;
    cout<<"Enter num:";
    cin>>a;
    x=positive(a);
    if(x==1)
    cout<<"postive";
    else
    cout<<"Not positive";
    return 0;
}