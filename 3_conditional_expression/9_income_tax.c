#include<stdio.h>
int main(){
    float income,tax;
    printf("Enter your income :");
    scanf("%f",&income);
    if (income>=250000 && income <=500000){
        tax=0.05*(income -250000);
        printf("Your income tax is %f",tax);
    }
    else if (income>500000 && income <=1000000){
        tax = 0.20*(income-500000);
        printf("Your income tax is %f",tax);
    }
    else if (income>1000000){
        tax=0.30*(income-1000000);
        printf("Your income tax is %f",tax);
    }
    else{
        printf("NO INCOME TAX ");
    }
    return 0;
}