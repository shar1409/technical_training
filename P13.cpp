#include<iostream>
using namespace std;
int rectangle(int a,int b){
    int c;
    c=a*b;
    return c;
}
int main(){
    int a,b,area;
    cout<<"Enter length and breadth :";
    cin>>a>>b;
    area=rectangle(a,b);
    cout<<"Area of rectangle is "<<area;
    return 0;
}