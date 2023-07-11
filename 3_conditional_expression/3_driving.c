#include<stdio.h>
int main(){
    int age;
    int vipPass = 0;
    vipPass=1; // logical operator, OR operator

    printf("Enter your age\n");
    scanf("%d", &age);
    if ((age>=18 && age<90 )|| vipPass==1){ // here vipPass is working as OR operator
        printf("you can drive");    
    }
    else{
        printf("you can not drive");
    }
    return 0;
}