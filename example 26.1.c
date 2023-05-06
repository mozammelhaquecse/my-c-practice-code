

//printing  HCm  by using do while loop
#include<stdio.h>
main()
{
    int a, b ,c;
    printf("enter higest num= ");
    scanf("%d",&a);
    printf("enter lowest num= ");
      scanf("%d",&b);

    do

    {c=a%b;
        a=b;
    b=c;



    }while( a%b!=0);
    printf("GCD=%d",b);

}

