// Ferhanite to celious

#include<stdio.h>
int main(){
    float fehrenite;
    printf("Enter temperature in ferhanite\n");
    scanf("%f",&fehrenite);
    float celcious = 0.5555555555*(fehrenite-32);
    printf("temperature in celcious %f",celcious);
    return 0;
}