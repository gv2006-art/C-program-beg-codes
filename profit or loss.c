#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter The Cost Price And Selling Price :");
    scanf("&d",&cp , &sp);
    if(cp>sp){
        printf("Loss\n");
    }
    if(sp>cp){
        printf("Profit\n");
    }
    if(cp == sp){
        printf("Nor profit nor loss\n");
    }
    return 0;
}