#include<stdio.h>
int main(){
    int a=1;
    for(a;a<=10;a++){
        for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n ",a,i,a*i);
        if(i==10){
            printf("**************\n");
        }
    }}
    return 0;
}