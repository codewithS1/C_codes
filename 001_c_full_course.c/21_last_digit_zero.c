#include<stdio.h>
int main(){
    int num,last,replace;
    printf("Enter number\n");
    scanf("%d",&num);
    last=num%10;
    replace=num-last;
    printf("Number is %d \n",replace);
    int newnum,num1;
    printf("Enter new number(1-9)\n");
    scanf("%d",&num1);
    newnum=replace+num1;
    printf("New number is %d",newnum);

    return 0;
}


// %10 gives last digit of a number