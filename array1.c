#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,l=-90;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>l)
        l=a[i];
    }
    printf("%d",l);

    return 0;
}