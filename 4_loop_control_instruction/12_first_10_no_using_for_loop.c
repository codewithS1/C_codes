#include<stdio.h>
int main(){
    int a=1;
    int sum=0;
    for(a;a<11;a++){
        sum=a+sum;
    }
    printf("sum is %d",sum);
    return 0;
}