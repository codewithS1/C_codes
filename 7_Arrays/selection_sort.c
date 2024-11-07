#include<stdio.h>
int min(int A[],int K,int N){
    // int A[5],K,N,j;
    int loc,min,j;
    min=A[K];
    loc=K;
    for(j=K=1;j<=N-1;j++)
        if(min>A[j]){
            min=A[j];
            loc=j;
        }
    return (loc);
}
int main(){
    int A[]={11,25,6,3,1,65,78,96,85,7};
    int k,temp,loc;
    for(k=0;k<=8;k++){
        loc=min(A,k,10);
        temp=A[k];
        A[k]=A[loc];
    }
    for(k=0;k<=9;k++){
        printf(" %d",A[k]);
    }
    return 0;
}