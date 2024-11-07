#include<stdio.h>

//Using iteration
int fib(int n){
    int T0=0,T1=1,s=0,i;
    if(n<=1) return n;
    for(i=2;i<=n;i++){
        s=T0+T1;
        T0=T1;
        T1=s;
    }
    return s;
}

//Using recursion
int fibR(int n){
    if(n<=1)
        return n;
    return fib(n-2)+fib(n-1);
}

//using Memoisation
int F[15]; //only valid till 10

int mfib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=fib(n-2);
        if(F[n-1]==-1){
            F[n-1]=fib(n-1);
        F[n]=F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
        }
    }
}
}

int main(){
    int i;
    for(i=1;i<=15;i++)
        F[i]=-1;
    printf("%d",mfib(12));
    return 0;
}