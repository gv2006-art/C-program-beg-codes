#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    if(n % 5 == 0){
        printf("It is divisible\n");
    }
    else{
        printf("It is not divisible\n");
    }
    return 0;
}