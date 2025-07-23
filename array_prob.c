#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,temp,j,k_large,k_small,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter k value:");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    k_small=a[k-1];
    k_large=a[n-k];
    p=k_small*k_large;
    printf("\nProduct is %d",p);
    return 0;
}