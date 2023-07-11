#include<stdio.h>
int main(){
    int a=10;
    do{
        printf("The value of a is %d \n",a);
        if(a==15){
            break;
        }
        a++;
    }while(a<=30);

    return 0;
}