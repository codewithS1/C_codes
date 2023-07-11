#include<stdio.h>
int main(){
    int a,b,d,c=0;
    printf("Enter a number\n");
    scanf("%d",&a);
    do{
        a=a/10;
        c=c+1;
    }while(a!=0);
    printf("digit=%d",c);
    return 0;
}