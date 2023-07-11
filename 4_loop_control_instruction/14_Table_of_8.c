#include<stdio.h>
int main(){
    int num=8;
    int a=1;
    int b=0;
    for(a;a<11;a++){
        num=8*a;
        b=num+b;
    printf("%d \n",num);}
    printf("Sum of table 8 is %d",b);
    return 0;
}