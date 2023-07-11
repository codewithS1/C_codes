#include<stdio.h>
int main(){
    int a=0;
    int sum;
    while(a<=10){
        sum=a+sum;
        a++;
    }
        printf("Value of first 10 natural number is %d\n",sum);
    return 0;
}