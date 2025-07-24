#include<iostream>
#include<math.h>
using namespace std;
int main(){
    
    int a,b,c,d;
    float r1,r2;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=((-b)-sqrt(d))/(2*a);
        cout<<r1<<endl<<r2;
        
    }
    else
    cout<<"Imaginary roots";
return 0;
}