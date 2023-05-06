#include<stdio.h>
int main(){
int num,i, is_prime;
printf("enter the number");
scanf("%d",&num);
is_prime=1;
for(int i=2; i<=num;i++){

if ((double)num/(double) i ==0)
    {is_prime=0;}
}





if(is_prime)
    printf("the number is prime\n");
else
    printf("the number is not prime\n");

}
