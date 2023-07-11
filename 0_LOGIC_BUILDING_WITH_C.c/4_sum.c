#include<stdio.h>
int main(){
    int a,b;
    printf("Enter number\n");
    scanf("%d %d",&a,&b);
    // int b;
    // printf("Enter number\n");
    // scanf("%d",&b);
    printf("Sum of %d and %d is %d ",a,b,a+b);
    return 0;
}
// multiple format specifier can be used in a single statement