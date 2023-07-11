#include<stdio.h>
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>0){
        printf("Its a positive number");
    }
    if(a<=0){
        printf("Its a non positive number");
    }
    return 0;
}