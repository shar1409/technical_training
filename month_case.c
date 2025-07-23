#include<stdio.h>
int main(){
    int n;
    printf("\n1.Jan\n2.feb\n3.March\n4.April\n5.May\n6.June\n7.July\n8.Aug\n9.sept\n10.oct\n11.Nov\n12.Dec\n");
    printf("Enter number:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    printf("january");
    break;
    case 2:
    printf("february");
    break;
    case 3:
    printf("march");
    break;
    case 4:
    printf("april");
    break;
    case 5:
    printf("may");
    break;
    case 6:
    printf("june");
    break;
    case 7:
    printf("july");
    break;
    case 8:
    printf("august");
    break;
    case 9:
    printf("sept");
    break;
    case 10:
    printf("oct");
    break;
    case 11:
    printf("november");
    break;
    case 12:
    printf("december");
    break;
    default:
    printf("Invalid");
    break;
}
return 0;
}















