#include<iostream>
using namespace std;
int fibTerm(int n){
    int a=1,b=1,count=2,c;
    if(n==1 ||n==2)
    return a;
    while(1){   
        count++;
        c=a+b;
        a=b;
        b=c;
        if(count==n)
        return c;
    }
    }
int main(){
    int a;
    int x;
    cout<<"Enter the order id : ";
    cin>>a;
    x=fibTerm(a);
    cout<<x;
    return 0;

}