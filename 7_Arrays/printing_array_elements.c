#include<stdio.h>
int main(){
    int array[5];
    int ind=2;

    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<5;i++){
        if (i==2){
            array[2]=99;

        }
        printf("%d ",array[i]);
    }

    return 0;
}