#include<iostream>
#include<time.h>
using namespace std;
int random(){
    int y;
    srand(time(0));
    y=(rand())+1;
    return y;
}
int main(){
    int a;
    a=random();
    cout<<"Random number is "<<a;
    return 0;
}