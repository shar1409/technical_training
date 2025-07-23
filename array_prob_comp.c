#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
#include<math.h>
int main(){
    int x,n,i,j,l=INT_MIN,s=INT_MAX,count,c,diff,mindiff=100,z=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter x value:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]>l)
        l=a[i];
        if(a[i]<s)
        s=a[i];
    
    }
    //printf("\nsmallest element is %d",s);
    //printf("\nlargest element is %d",l);
    while(s<=l){
        count=0;
        for(j=2;j<=sqrt(x);j++){
        if(s%j==0)
        count++;
    }
    if(count==0){
        for(i=0;i<n;i++){
            if(a[i]==s){
                diff=abs(a[i]-x);
                if(diff<mindiff)
                {
                    mindiff=diff;
                    z=a[i];
                }
            }
            
        }
    }
    s++;
}
printf("\n%d",z);
return 0;
}