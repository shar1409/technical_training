#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i;
    printf("enter the static array elements:\n");
    for(i=0;i<5;i++)
    {

        scanf("%d",&a[i]);
    }
    printf("the static array elements are:\t");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    int n1;
    printf("\n enter the number of elements in the dynamic memory allocations:\t");
    scanf("%d",&n1);
    int *b=(int*)malloc(n1*sizeof(int));
    
    if(b==NULL)
    {
        printf("memory allocation failed");
        return 0;
    }
    printf("enter the %d elements for the dynamic array:\t",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);
    }
    int n2;
    printf("\n enter the new size of dynamic array:\t");
    scanf("%d",&n2);
    b=(int*)realloc(b,n2*sizeof(int));
    if(n2>n1)
    {
        printf("enter %d more elements for resized array\n",n2-n1);
        for(i=n1;i<n2;i++)
        {
            scanf("%d",&b[i]);
        }
    }
    printf("\nResized array is \n");
    for(i=0;i<n2;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\n");
    free(b);
    return 0;
}