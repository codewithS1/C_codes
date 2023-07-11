#include<stdio.h>
int main(){
    int n=1;
    for(int row=6;row>=n;row--){
        for(int col=1;row-col;col++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}