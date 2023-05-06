#include<stdio.h>
main()
{int i, j,k=1;
    for(i=1;i<=3;  i=i+1)
    {
        for(j=1;j<=k;j=j+1)
            printf("*");
        printf("\n");
    }k=k+2;
}

