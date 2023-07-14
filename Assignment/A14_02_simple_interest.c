// TSRS
#include<stdio.h>
int simpleint(int,int,int);
int main(){
    int principle,Rate,Time,SI;
    printf("Enter principle\n");
    scanf("%d",&principle);
    printf("Enter Rate\n");
    scanf("%d",&Rate);
    printf("Enter Time\n");
    scanf("%d",&Time);
    SI=simpleint(principle,Rate,Time);
    printf("Simple interest is %d",SI);
    return 0;
}
int simpleint(int a,int b,int c){
    int simpint;
    simpint=(a*b*c)/100;
    return simpint;
}