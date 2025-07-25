#include<iostream>
using namespace std;
int square(int s){
    int a;
    a=s*s;
}
int main(){
    int s,area;
    cout<<"Enter side :";
    cin>>s;
    area=square(s);
    cout<<"Area of square is "<<area;
    return 0;
}
