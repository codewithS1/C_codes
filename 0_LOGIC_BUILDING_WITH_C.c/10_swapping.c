#include<stdio.h>
int main(){
    float a,b;
    printf("Enter two numbers \n");
    scanf("%f %f",&a,&b);
    printf("a=%f b=%f \n",a,b);
    b=(a+b)-(a=b);
    printf("a=%f b=%f \n",a,b);
    return 0;
}
