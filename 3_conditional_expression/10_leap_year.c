#include<stdio.h>
int main(){
    int year ;
    printf("Enter the year for which you want to check LEAP YEAR \n");
    scanf("%d",&year);
    if (year%4==0){
        (year%100==0);
        (year%400==0);
        printf("%d is an leap year",year);
    }
    else{
        printf("%d is not an leap year",year);
    }
    return 0;
}