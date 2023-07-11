#include<stdio.h>
int main(){
    int num;
    printf("Enter number \n");
    scanf("%d",&num);
    if(num==1){
        printf("Given number is 1");
    }
    else if(num==2){
        printf("given number is 2");
    }
    else if (num==3){
        printf("given number is 3");
    }
    else {
        printf("Entered number is not 1,2,3");
    }
    return 0;
}