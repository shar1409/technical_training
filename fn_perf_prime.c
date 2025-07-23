#include<stdio.h>
#include<math.h>
int Prime(int x)
{
    int i,count=0,r,c=0,w;
    int isperfect_prime=0;
    int b=x;
    for(i=2;i<sqrt(x);i++)
    {
        if(x%i==0)
        count++;
    }
    if(count==0)
    {
        int sum=0;
        while(x>0)
        {
            r=x%10;
            sum=sum+r;
            x=x/10;
        }
            for(i=2;i<sqrt(sum);i++)
            {
                if(sum%i==0)
                c++;
            }
            w=0;
            if(c==0)
            {
            while(b > 0) 
            {
                w = b % 10;
                if ( w == 2 || w == 3 ||w == 5 || w == 7)
                 {
                    isperfect_prime++;
                 }
                b = b/ 10;
            }
                if(isperfect_prime>0)
                return 1;
                
                else
                return 0;
            }
            else 
            return 0;
    }    
    else
    return 0;
}

int main(){
    int a,b;
    printf("Enter number:\n");
    scanf("%d",&a);
    b=Prime(a);
    if(b==1)
    printf("perf prime");
    else
    printf("not perf prime");
    
    return 0;
}