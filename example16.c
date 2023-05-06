//switch csse
#include<stdio.h>
main()
{
    int n ,j=2;
    printf("enter a num");
    scanf("%d",&n);
    for(j=2;j<=n-1;j++)
    {
        if(n%j==0){
            printf("%d  is not prime",n);
            break;
        }
    }

    if (j==n)
        printf("num is prime=%d\n",n);
}
