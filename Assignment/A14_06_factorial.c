// TSRS
#include<stdio.h>

int factorial(int);
int main(){
    int num,rslt;
    printf("Enter a number\n");
    scanf("%d",&num);
    rslt=factorial(num);
    printf("Factorial of num is %d\n",rslt);
    return 0;
}
int factorial(int n){
    int f=1,r=1;
    for(f;r<=n;r++){
        f=f*r;
        printf("%d\n",f);
    }
    return f;
}