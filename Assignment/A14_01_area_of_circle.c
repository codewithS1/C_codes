// TSRS

#include<stdio.h>

float circlrarea(float);
int main(){
    float radius,area;
    printf("Enter radius of a circle \n");
    scanf("%f",&radius);
    area=circlrarea(radius);
    printf("Area of given circle is %f",area);

    return 0;
}

float circlrarea(float x){
    float y;
    y = 3.14*x*x;
    return y;
}