#include<iostream>
using namespace std;
int marks(int m1,int m2,int m3)
{
if(m1>=36){
    if(m2>=36){
        if(m3>=36)
        return 1;  
        else
        return 0;
    }
    else
    return 0;
}
else
return 0;
}
int main(){
    int m1,m2,m3,x;
    cout<<"Enter marks of subject 1 2 3:";
    cin>>m1>>m2>>m3;
    x=marks(m1,m2,m3);
    if(x==0)
    cout<<"Fail";
    else
    cout<<"Pass";
    return 0;
}