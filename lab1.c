#include <stdio.h>
#include<math.h>
double series(int ,int);
int main()
{
    int x ,n ;
    printf("Enter two number x and n\n");
    scanf("%d","%d",&x,&n);
    double r= series(x,n);
    printf("lf",r);

}
double factorial(n)
{
    double fact;
    if(n==1)
        {return 1; }
    else
        {fact=n * factorial (n-1);
        return fact;
    }
}
double series (int x,int n)
{double r = 0;
for(int i=1; i<=n;i++)
{
    r+=pow(x,i)/factorial(i);
    }
    return r;

}


