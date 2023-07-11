#include<stdio.h>
int main(){
    int num,last;
    printf("Enter number\n");
    scanf("%d",&num);
    last=num%10;
    printf("last digit of number is %d ",last);
    return 0;
}

// %10 gives last digit of a number