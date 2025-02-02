#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("Its even\n");
    }
    else
    {
        printf("Its odd\n");
    }
    return 0;
}