// TSRN
#include<stdio.h>
void fir_num(int);
int main(){
    int natrl_num,rel;
    printf("Enter a number\n");
    scanf("%d",&natrl_num);
    fir_num(natrl_num);
    return 0;
}
void fir_num(int num){
    int r=1;
    for(num;(num*2)>=r;r++){
        if(r%2!=0){
        printf("num= %d \n",r);
        }
    }
}