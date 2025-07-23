#include<stdio.h>
int main()
{
    int source,dest,no_adult,no_child,stops;
    float t_cost,total,road_tax;
    printf("enter source_stage_no:");
    scanf("%d",&source);
    printf("enter destination_stage_no:");
    scanf("%d",&dest);
    printf("enter no of adults:");
    scanf("%d",&no_adult);
    printf("enter no of children:");
    scanf("%d",&no_child);
    stops=dest-source;
    t_cost=((no_adult*10) + (no_child *5))*stops;
    road_tax=0.05*t_cost;
    total=road_tax+t_cost;
    printf("Source stage no:%d\n",source);
    printf("Destination stage no:%d\n",dest);
    printf("no of adults:%d\n",no_adult);
    printf("no of children:%d\n",no_child);
    printf("ticket cost:%f\n",t_cost);
    printf("road tax=%f\n",road_tax);
    printf("Total cost:%f",total); 
    return 0;
}