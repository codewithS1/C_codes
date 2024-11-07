#include<stdio.h>
#include <stdlib.h>
int main(){
    int A[5]={1,2,3,4,5};
    int *p;
    // int p[5];
    p=(int *)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=3;
    p[2]=5;
    p[3]=7;
    for(int i=0;i<5;i++){
        printf("%d ",A[i]);
    }
        printf("\n");
        // printf("%d ",p[i]);
    for(int i=0;i<5;i++){
        printf("%d ",p[i]);}
    return 0;
}