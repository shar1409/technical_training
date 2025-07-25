#include<iostream>
#include<stdlib.h>
using namespace std;
int n;
int* UniqueArray(int *x)
{
    int count=0,i,j,flag;
    int *y=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        flag=1;
        for(j=0;j<count;j++){
            if(x[i]==y[j])
            flag=0;
        }
        if(flag==1)
        y[count++]=x[i]; 
        }
    
    n=count;
    y=(int *)realloc(y,count*sizeof(int));
    return y;
    }
    
int main()
{
    int n,i;
    int *q;
    cout<<"Enter size:";
    cin>>n;
    int *a=(int *)malloc(n*sizeof(int));
    cout<<"Enter array elements :";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    q=UniqueArray(a);
    for(i=0;i<n;i++)
    {
        cout<<q[i]<<"\t";
    } 
    return 0;
}