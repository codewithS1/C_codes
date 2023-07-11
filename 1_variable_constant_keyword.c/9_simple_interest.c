#include<stdio.h>

int main(){
    float p,r,t ;
    printf("Enter principe amount\n");
    scanf("%f",&p);
    printf("Enter rate of interest \n");
    scanf("%f",&r);
    printf("Enter time in years \n");
    scanf("%f",&t);
    float total= p*r*t/100;
    printf("calculated simple interest is %f",total);
    return 0;
}