#include<stdio.h>

int main(){
    int radius;
    float pi=3.14;
    printf("Enter radius of circle is \n");
    scanf("%d",&radius);
    printf("Area of circle is %f \n",pi*radius*radius);
    int height;
    printf("Enter height of circle\n");
    scanf("%d",&height);
    printf("Volume of circle is %f",pi*radius*radius*height);
    return 0;
}