#include<stdio.h>
int main(){
    printf("*************  You have 3 chance  **************** \n");
    int i;
    for(i=0;i<=2;i++){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("You WON the game\n");
        break;
    }
    }
    // printf(" value of i is %d\n",i);
    if(i==3){
        printf("You LOST the game\n");
    }
    return 0;
}