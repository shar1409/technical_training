#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
#include<math.h>
int main(){
    int x,n,i,l=INT_MIN,s=INT_MAX;
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
    printf("\nsmallest element is %d",s);
    printf("\nlargest element is %d",l);
    c:for(i=2;i<=sqrt(x);i++){
        if(x%i==0)
        count++;
    }
    if(count==0){
        for(i=0;i<n;i++){
            if(a[i]==x){
                printf("prime:%d",x);
                goto 1;
            }
            goto 2;
        }
    }
    b:else
    {   
        while(x<=l){
            x++;
        }
        
        goto 3;

    }




    }

    a:return 0;
}