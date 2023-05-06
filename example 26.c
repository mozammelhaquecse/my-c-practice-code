
//printing  HCm  by using do while loop
#include<stdio.h>
main()
{
    int a, b ,c;
    printf("enter higest num= ");
    scanf("%d",&a);
    printf("enter lowest num= ");
      scanf("%d",&b);
    c=a%b;
    do

    {a=b;
    b=c;

            printf("gCD=%d",b);

    }while( a%b!=0);
}

