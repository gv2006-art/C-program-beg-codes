#include <stdio.h>
int main()
{
    int n;
    printf("Enter A number:");
    scanf("%d", &n);
    if (n > 99 && n < 100)
    {
        printf("It is a three digit number\n");
    }
    else
    {
        printf("It is  not a three digit number\n");
    }
    return 0;
}