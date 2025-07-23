#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    //N
        for(i=1;i<=n;i++)
        {
            if(i==1 || i==n)
            {
            for(j=1;j<=n;j++)
            {
                if(j==1 || j==n)
                printf("* ");
                else
                printf("  ");
            }
            
            }
            else
            {
                    for(j=1;j<=n;j++)
                    {
                        if(j==1 || j==i || j==n)
                        printf("* ");
                        else
                        printf("  ");
                    } 
            }
        printf("\n");
    }
    //I
    printf("\n");
        for(i=1;i<=n;i++)
        {
            if(i==1 || i==n)
            {
            for(j=1;j<=n;j++)
            { 
                printf("* ");    
            }
            
            }
            else
            {
                    for(j=1;j<=n;j++)
                    {
                        if(j==(n+1)/2)
                        printf("* ");
                        else
                        printf("  ");
                    } 
            }
        printf("\n");
    }
    //T
    printf("\n");
        for(i=1;i<=n;i++)
        {
            if(i==1)
            {
            for(j=1;j<=n;j++)
            { 
                printf("* ");    
            }
            
            }
            else
            {
                    for(j=1;j<=n;j++)
                    {
                        if(j==(n+1)/2)
                        printf("* ");
                        else
                        printf("  ");
                    } 
            }
        printf("\n");
    }
    //T
    printf("\n");
        for(i=1;i<=n;i++)
        {
            if(i==1)
            {
            for(j=1;j<=n;j++)
            { 
                printf("* ");    
            }
            
            }
            else
            {
                    for(j=1;j<=n;j++)
                    {
                        if(j==(n+1)/2)
                        printf("* ");
                        else
                        printf("  ");
                    } 
            }
        printf("\n");
    }
        printf("\n");
        for(i=1;i<=n;i++)
        {
            if(i==1 ||i==(n+1)/2 || i==n)
            {
            for(j=1;j<=n;j++)
            { 
                printf("* ");    
            }
            
            }
            else
            {
                    for(j=1;j<=n;j++)
                    {
                        if(j==1)
                        printf("* ");
                        
                    } 
            }
        printf("\n");
    }
    return 0;
}