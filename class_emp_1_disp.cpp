#include<iostream>
#include<string.h>
using namespace std;
class Employee{
    public:
    int id,exp,sal;
    char name[100],dept[100],desig[100];
    void inputdata(){
        cout<<"Enter id :"<<endl;
        cin>>id;
        cin.ignore();
        cout<<"Enter name :"<<endl;
        gets(name);
        cout<<"Enter salary :"<<endl;
        cin>>sal;
        cout<<"Enter experience :"<<endl;
        cin>>exp;
        cout<<"Enter department :"<<endl;
        cin>>dept;
        cout<<"Enter designation :"<<endl;
        cin>>desig;
    }
    void display(){
        cout<<"Id :"<<id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"Salary :"<<sal<<endl;
        cout<<"Experience :"<<exp<<endl;
        cout<<"Department :"<<dept<<endl;
        cout<<"Designation :"<<desig<<endl;
    }};
    int main(){
        int x,i,flag=0;
        Employee e[5];
        for(i=0;i<5;i++){
            cout<<"Enter emp "<<i+1 <<"data"<<endl;
            e[i].inputdata();
        }
        cout<<"Enter x value:";
        cin>>x;
        for(i=0;i<5;i++){
            if(x==e[i].id){
                flag=1;
            cout<<" emp "<<x <<"data is"<<endl;
            e[i].display();}
        }
        if(flag==0)
        cout<<"no data found";
        return 0;
    }
    
    



