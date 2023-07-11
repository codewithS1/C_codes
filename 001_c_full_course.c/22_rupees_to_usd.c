#include<stdio.h>
int main(){
    float rupees;
    float usd;
    printf("Enter price in rupees\n");
    scanf("%f",&rupees);
    usd=rupees/76.23;
    printf("Price in usd is %f",usd);
    return 0;
}