#include<stdio.h>
int main(){
    float rupee,dollar;
    printf("Enter price in rupees :");
    scanf("%f",&rupee);
    dollar=rupee/80;
    printf("%f",dollar);
    return 0;
}