#include<stdio.h>
int main(){
    long long int p_no;
    float s_no,p_read,prev_read,total_unit,s_gst,gst,total,unit_a;
    printf("Enter service number:");
    scanf("%f",&s_no);
    printf("Enter phone number:");
    scanf("%ld",&p_no);
    printf("Enter present reading:");
    scanf("%f",&p_read);
    printf("Enter previous reading:");
    scanf("%f",&prev_read);
    total_unit=p_read-prev_read;
    unit_a=2*total_unit;
    gst=unit_a*0.05;
    s_gst=unit_a*0.05;
    total=unit_a+s_gst+gst;
    printf("service number:%f\n",s_no);
    printf("phone number:%ld\n",p_no);
    printf("total unit:%f\n",total_unit);
    printf("total cost:%f",total);
    return 0;
}