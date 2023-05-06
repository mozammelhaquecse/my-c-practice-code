//conversion of temperature.
#include<stdio.h>
#include<conio.h>
int main()
{
    int F;// wrong
    float C;

    printf("enter Ferhenheight  temperature value=");
    scanf("%d", &F);

    C = 5/9*(F -32);
    printf("Celcious temperature =%f",C);
}
