#include<stdio.h>
int main(){
    int sum=0;
    int a=0;
    do{
        sum=sum+a;
        a++;
    }while(a<11);
    printf("sum is %d",sum);
    return 0;
}