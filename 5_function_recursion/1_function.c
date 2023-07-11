#include<stdio.h>
int main(){
    void display(); // function prototype
    int a=5;
    int b=6;
    printf("sum of %d and %d is %d \n",a,b,a+b);
    display(); // function call
    printf("display fusction has been executed\n");
    return 0;
}
// function defination
void display(){
    printf("hello myself display\n");
}