#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,r;
    printf("Enter the Dividend :");
    scanf("%f",&a);
    printf("Enter the Divisor :");
    scanf("%f",&b);
    r = fmod(a, b);
    printf("The Remainder when dividend %f and divisor %f is : %f",a,b,r);
    return 0;
}