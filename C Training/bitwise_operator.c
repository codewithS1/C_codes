#include<stdio.h>
int main(){
    int a= ~5;
    int b=8;
    printf("and a&b = %d\n",a&b);
    printf("or a|b = %d\n",a|b);
    printf("Xor a^b = %d\n",a^b);
    printf("not ~a = %d\n",~a);
    printf("left shift b<<1 = %d\n",b <<1);
    printf("right shift b>>1 = %d\n",b>>1);
    return 0;
}