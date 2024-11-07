#include<stdio.h>
int main(){
    int a;
    printf("Enter a number to check its divisibility by 97 \n");
    scanf("%d",&a);
    printf("Divisibility test returns %d", a%97);
    return 0;
}