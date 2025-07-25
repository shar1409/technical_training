#include<iostream>
using namespace std;
int main(){
    int x;
    while(1){
    cout<<"Enter oxygen level :";
    cin>>x;
    if(x>=1 && x<=100){
        cout<<"Oxygen level is "<<x;
        break;
    }
    }
    return 0;
}