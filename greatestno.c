#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a,b,c Coefficients :");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("a is greatest\n");// printf("%d is greatest\n",a); can also be used after all if statements
    }
    if (b > a && b > c)
    {
        printf("b is greatest\n");
    }
    if (c > a && c > b)
    {
        printf("c is greatest\n");
    }
    return 0;
}