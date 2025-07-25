#include<iostream>
using namespace std;
int circle(int r){
    float c;
    c=(float)3.14*r*r;
    return c;
}
int main(){
    int r,area;
    cout<<"Enter radius :";
    cin>>r;
    area=circle(r);
    cout<<"Area of circle is "<<area;
    return 0;
}