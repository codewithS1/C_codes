#include<stdio.h>
int main(){
    float a=1,num,fac=1;
    printf("Enter a number\n");
    scanf("%f",&num);
    for(a;a<=num;a++){
        printf("Value is %f\n",a);
        fac=fac*a;
    }
    printf("Factorial is %f",fac);
    return 0;
}