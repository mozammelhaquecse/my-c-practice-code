//making pattern by using for loop
#include<stdio.h>
main()
{
    int a,b;
    for(a=5;a>=1;a=a-1)
    {
        for( b=1;b<=a;b++)
            printf("*");
        printf("\n");
    }
}

