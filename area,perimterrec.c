#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length and breadth :");
    scanf(" %d %d",&l,&b);
    int a = l*b;
    int p = 2*(l+b);
    if(a>p)
    {
        printf("Area is greater\n");
    }
    else{
        printf("Area is lesser\n");
    }
    return 0;
}