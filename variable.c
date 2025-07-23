#include<stdio.h>
int c;//global variable
int addition(int a,int b){
    c=a+b;
    return c;
}
int main(){
    int x,y;//local variable
    scanf("%d%d",&x,&y);
    c=addition(x,y);
    printf("%d",c);

}