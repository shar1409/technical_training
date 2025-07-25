#include<iostream>
#include<math.h>
using namespace std;
float math(int x,int y)
{
    float z;
   z=(log10(exp(x))+log(sqrt(y)))/(sin(x)+exp(y)+pow(x,y));
   return z;
}
int main(){
    int a,b;
    float x;
    cout<<"Enter num1 and num2 :";
    cin>>a>>b;
    x=math(a,b);
    cout<<"solution is "<<x;
    return 0;
}