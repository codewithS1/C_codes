#include<stdio.h>

int main(){
    float celcious;
    printf("Enter temperature in celcious\n");
    scanf("%f",&celcious);
    float temperature = celcious*1.8 +32;
    printf("temperature in fehrenhite %f",temperature);
    return 0;
}