//program for finding area of triangle giving length of three side.
#include<stdio.h>
main(){
float a,b,c, s,area;
printf("enter first arm=\n");
scanf("%f",&a);
printf("enter second arm=\n");
scanf("%f",&b);
printf("enter third arm=\n");
scanf("%f",&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle=%f\n",area);}
