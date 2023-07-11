#include<stdio.h>
int main(){
    int a;
    int b=1;
    int sum=0;
    printf("Enter number\n");
    scanf("%d",&a);
    while(b<=a){
        printf("%d \n",b);
        sum=sum+b;
        b++;
    }
    printf("Sum of first n natural number is %d",sum);
    return 0;
}