#include<iostream>
using namespace std;
int fact(int n){
    int i,f=1;
    for(i=1;i<=n;i++){
        f=i*f;
    }
    return f; 
    }
    int countTrail(int x){
        int n,r,count=0;
       n= fact(x);
       while(n>0){
        r=n%10;
        if(r==0){
        count++;
        n=n/10;
        }
        else
        break;
       }
       return count;
    }
int main(){
    int a;
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    a=countTrail(x);
    cout<<"Total trailing numbers :"<<a;
    return 0;

}