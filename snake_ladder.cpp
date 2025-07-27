#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int P1=0,P2=0,P,r;
    while(1)
    {
        cout<<"Enter player number :"<<endl;
        cin>>P;
        srand(time(0));
        r=(rand()%10)+1;
        if(r>6)
        r=r-3;
        cout<<"dice score "<<r<<endl;
        if(P==1)
        {
            P1=P1+r;
            if(P1==8)
            P1=P1+14;
            else if(P1==27)
            P1=P1+26;
            else if(P1==42)
            P1=P1+26;
            else if(P1==61)
            P1=P1+30;
            else if(P1==75)
            P1=P1-20;
            else if(P1==97)
            P1=P1-80;
            else if(P1==93)
            P1=P1-60;
            else if(P1==74)
            P1=P1-34;
            else if(P1==56)
            P1=P1-30;
            else if(P1==23)
            P1=P1-16;
            else if(P1==100)
            {
            cout<<"winner";
            break;
            }
            else if(P1>100)
            P1=P1-r;
            cout<<"score is "<<P1<<endl;
            
        }
        else if(P==2)
        {
            P2=P2+r;
            if(P2==8)
            P2=P2+14;
            else if(P1==27)
            P2=P2+26;
            else if(P2==42)
            P2=P2+26;
            else if(P2==61)
            P2=P2+30;
            else if(P2==75)
            P2=P-20;
            else if(P2==97)
            P2=P2-80;
            else if(P2==93)
            P2=P2-60;
            else if(P2==74)
            P2=P2-34;
            else if(P2==56)
            P2=P2-30;
            else if(P2==23)
            P2=P2-16;
            else if(P2==100){
            cout<<"winner";
            break;}
            else if(P2>100)
            P2=P2-r;
            cout<<"score is "<<P2<<endl;
        }
        else 
        cout<<"Enter valid player Number"<<endl;
    }
    return 0;
}