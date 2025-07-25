#include<iostream>
using namespace std;
int triangle(int b,int h){
   float c;
    c=(float)0.5*b*h;
    return c;
}
int main(){
    int a,b,area;
    cout<<"Enter base and height :";
    cin>>a>>b;
    area=triangle(a,b);
    cout<<"Area of triangle is "<<area;
    return 0;
}