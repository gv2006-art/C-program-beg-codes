#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter Ram's Age: ");
    scanf("%d", &a);
    printf("Enter Shyam's Age: ");
    scanf("%d", &b);
    printf("Enter Ajay's Age: ");
    scanf("%d", &c);
    int youngest;
    if (a < b && a < c) {
        youngest = a;
    } else if (b < a && b < c) {
        youngest = b; 
    } else {
        youngest = c; 
    }
     printf("The youngest age is: %d\n", youngest);
    return 0;
}