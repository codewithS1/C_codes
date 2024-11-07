#include<stdio.h>
#include<conio.h>
int main(){
    int month;
    printf("Enter month number \n");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        printf("Month has 31 days\n");}
    else if(month==4||month==6||month==9||month==11){
        printf("Month has 30 days\n");}
    else if(month==2){
        printf("Month has 28/29 days\n");
    }else{
        printf("Invalid month number");
    }
    getch();
    return 0;
}