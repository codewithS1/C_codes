#include<stdio.h>
int main(){
    float a;
    float b=1;
    float c=1;
    printf("Enter number \n");
    scanf("%f",&a);
    while(b<=a){
        // printf("%f \n",b);
        c=c*b;
        b++;
    }
    printf("Factorial of %f is %f ",a,c);
    return 0;
}