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
};
    int main(){
        int n=0,x,flag=0,i,c,m,m1,m2,m3,ht;
        Student s[100];
        int opt;
        while(1){
        cout<<"\nchoose any one of the below options ";
        cout<<"\n1.Add\n2.display\n3.update\n4.delete\n5.exit";
        cout<<"\nEnter ur choice :";
        cin>>opt;
        switch(opt){
        case 1:
        s[n++].inputdata();
        break;
        case 2:
        flag=0;
        cout<<"Enter ht :";
        cin>>ht;
        for(i=0;i<100;i++){
            if(ht==s[i].ht){
                flag=1;
                cout<<" student of "<<ht <<"data is"<<endl;
                s[i].display();
                cout<<"total marks is :"<<s[i].total()<<endl;
                cout<<"avg marks is :"<<s[i].average()<<endl;
                s[i].grade();
                cout<<endl<<"pass";    
            }
        }
        if(flag==0)
        cout<<"no data found";
        break;
        case 3:
        flag=0;
        cout<<"Enter ht to update :";
        cin>>ht;
        for(i=0;i<100;i++){
            if(ht==s[i].ht){
                flag=1;
                cout<<"choose which marks to update:\n1.m1\n2.m2\n3.m3"<<endl;
                cin>>c;
                cout<<"Enter marks:"<<endl;
                cin>>m;
                switch(c){
                    case 1:
                    s[i].m1=m;
                    break;
                    case 2:
                    s[i].m2=m;
                    break;
                    case 3:
                    s[i].m3=m;
                    break;
                }
                  
            }
        }
        if(flag==0)
        cout<<"no data found";
        break;
        case 4:
        cout<<"Cannot delete"<<endl;
        break;
        case 5:
        exit(0);
        break;
    }}
        return 0;
    }
    
    



