#include<stdio.h>
int main(){
    float km,m;
    printf("Enter distance in KM :");
    scanf("%f",&km);
    m=km*1000;
    printf("Distance in meter is %f m",m);
    return 0;
}