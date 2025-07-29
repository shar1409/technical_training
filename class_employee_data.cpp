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
        Employee e;
        e.inputdata();
        e.display();
        return 0;
    }
    
    



