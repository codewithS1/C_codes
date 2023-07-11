#include<stdio.h>
int main(){
    for(int row=1;row<=5;row++){
        // for every row ,run the column
        for(int col=1;col<=row;col++){
            printf("%d ",col);
        }
        //when one row is printed,we need to add a new line
        printf("\n");
    }
    return 0;
}