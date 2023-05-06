// identify large number by using if else
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    printf("enter two numbers=");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("largest value =%d\n",a);
    else
        printf("largest value =%d\n",b);
}
