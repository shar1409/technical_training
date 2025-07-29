#include<iostream>
#include<string.h>
using namespace std;
class Student{
    public:
    int m1,m2,m3,ht;
    char name[100];
    void inputdata(){
        cout<<"Enter name :"<<endl;
        cin>>name;
        cin.ignore();
        cout<<"Enter hall ticket no :"<<endl;
        cin>>ht;
        cout<<"Enter marks1 :"<<endl;
        cin>>m1;
        cout<<"Enter marks2 :"<<endl;
        cin>>m2;
        cout<<"Enter marks3 :"<<endl;
        cin>>m3;
    }
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"ht :"<<name<<endl;
        cout<<"m1 :"<<m1<<endl;
        cout<<"m2 :"<<m2<<endl;
        cout<<"m3 :"<<m3<<endl;
    }
    int total(){

        int t=m1+m2+m3;
        return t;
        
    }
    float average(){
        float avg=(float)(m1+m2+m3)/3;
        return avg;
    }
    void grade()
    {
        float avg=(float)(m1+m2+m3)/3;
         if(avg>90){
        printf("grade is A+");
    }
    else if(avg>80){
        printf("grade is A");
    }
    else if(avg>70){
        printf("grade is B+");
    }
    else if(avg>60){
        printf("grade is B");
    }
    else if(avg>50){
        printf("grade is C");
    }
    else if(avg>40){
        printf("grade is D");
    }
    else if(avg>35){
        printf("grade is E");
    }
    else
    printf("Fail");
    }
    bool passFail(){
        if(m1>=36 && m2>36 && m3>36)
        return true;
        else
        return false;
    }
};
    int main(){
        int n,x,flag=0,i,j;
        cin>>n;
        Student s[n],temp;
        for(i=0;i<n;i++){
            cout<<"Enter student "<<i+1 <<"data :"<<endl;
            s[i].inputdata();
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
           if(s[i].average()<s[j].average()){
           temp=s[i];
           s[i]=s[j];
           s[j]=temp;}
        }}
        
        cout<<"Enter x value:";
        cin>>x;
        for(i=0;i<n;i++){
            if(x==s[i].ht){
                flag=1;
                if(s[i].passFail()){
                cout<<" student of "<<x <<"data is"<<endl;
                s[i].display();
                cout<<"total marks is :"<<s[i].total()<<endl;
                cout<<"avg marks is :"<<s[i].average()<<endl;
                s[i].grade();
                cout<<endl<<"pass";
                cout<<endl<<"Rank is :"<<i+1;
                }
                else
                cout<<"fail";    
            }
        }
        if(flag==0)
        cout<<"no data found";
        return 0;
    }
    
    
