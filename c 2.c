#include <stdio.h>
int main()
{
    int number;
    printf("Enter an int number \n");
    scanf("%d",&number);
    if (number< 100)
        printf(" number is smaller than 100\n\n");
    else
        printf("your number contains more than two digits\n");

}
