#include<stdio.h>
int main(){
    float a,b;
    printf("Enter two numbers \n");
    scanf("%f %f",&a,&b);
    printf("a=%f b=%f \n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("a=%f b=%f \n",a,b);
    return 0;
}
