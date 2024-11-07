#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%i",&a);
    // a = '\15';
    printf("decimal = %i",a);
    printf("\nhexadecimal = %x\n",a);
    printf("octal = %o",a);
    return 0;
}