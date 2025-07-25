#include<iostream>
using namespace std;
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping num1 and num2 is "<<a<<b;

}
int main(){
    int a,b;
    cout<<"Enter num1 and num2 :";
    cin>>a>>b;
    cout<<"Before swapping num1 and num2 is "<<a<<b<<endl;
    swap(a,b);
    return 0;
}