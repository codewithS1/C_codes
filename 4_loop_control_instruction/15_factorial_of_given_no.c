#include<stdio.h>
int main(){
    float num=1 ;
    float fac ;
    float m=1 ;
    printf("Enter numer \n");
    scanf("%f",&fac);
    while(num<=fac){
        printf("%d \n",num);
        m=num*m;
        num++;
    }
    printf("Factorial of given number is %f",m);
    return 0;
}