#include<stdio.h>
int main(){
    float radius,area;
    printf("Enter radius of a circle\n");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of circle is %f\n",area);
    return 0;
}
// focus on format specifier %d,%f,%c