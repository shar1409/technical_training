#include<iostream>
using namespace std;
void evenOdd(int a)
{
    char str[2][10]={"even","odd"};
    cout<<str[a];

}
int main(){
    int a;
    cout<<"Enter num:";
    cin>>a;
    evenOdd(a%2);
    return 0;
}