#include<stdio.h>
int main(){
    int a=23;
    int b=8;
    printf("a=%d b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("a=%d b=%d",a,b);
    return 0;
}