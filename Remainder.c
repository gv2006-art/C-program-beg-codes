#include<stdio.h>
int main()
{
    float a,b,q,r;
    printf("Enter the Dividend :");
    scanf("%f",&a);
    printf("Enter the Divisor :");
    scanf("%f",&b);
    q = a/b;
    r = a - (b*q);
    printf("The Remainder when dividend %f and divisor %f is : %f",a,b,r);
    return 0;
}