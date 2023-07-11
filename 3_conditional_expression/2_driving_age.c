#include<stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if(age>=18){
        printf("you can drive");    
    }
    else{
        printf(" you can not drive");
    }
    return 0;
}