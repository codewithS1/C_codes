#include<stdio.h>
int main(){
    int a,sum=0;
    printf("Enter a number\n");
    scanf("%d",&a);
    for(int b=1;a>=b;b++){
        printf("value is %d\n",b*b*b);
        sum=sum+(b*b*b);
    }
    printf("Sum of cube of first n natural number is %d",sum);
    return 0;
}