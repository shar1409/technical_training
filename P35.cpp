#include<iostream>
using namespace std;
int Marks(int m,int p,int c)
{
int total=p+m+c;
    float avg=total/3;
    if(avg>90){
        cout<<"grade is A+";
    }
    else if(avg>80){
        cout<<"grade is A";
    }
    else if(avg>70){
        cout<<"grade is B+";
    }
    else if(avg>60){
        cout<<"grade is B";
    }
    else if(avg>50){
        cout<<"grade is C";
    }
    else if(avg>40){
        cout<<"grade is D";
    }
    else if(avg>35){
        cout<<"grade is E";
    }
    else
    cout<<"Fail";
}
int main(){
    int a,x,m,p,c;
    cout<<"Enter marks in m p c:";
    cin>>m>>p>>c;
    Marks(m,p,c);
    return 0;
}