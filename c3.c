#include <stdio.h>
int main()
{
    int year,period;
    float amount,intrate, value;
    printf("input amount, interest rate,and period\n");

    scanf("%f %f %d",&amount, &intrate,&period);
    printf("\n");
    year = 1;
    while(year<= period)
    {
        value = amount + intrate * amount;
        printf("%2d tk%8.2f\n" ,year, value);
        amount = value;
        year = year+1;
    }
}
