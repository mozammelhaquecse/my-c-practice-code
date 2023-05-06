//area of circle
#include<stdio.h>
#define PI 3.1416
main()

{
    int ra;
    float area;
    printf("enter value of radius =");
    scanf("%d",&ra),
    area=PI*(ra*ra);
    printf("Area of circle=%f\n" ,area);
}
