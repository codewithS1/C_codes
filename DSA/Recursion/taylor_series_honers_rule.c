#include<stdio.h>

// double e(int x,int n){
//     static double s=1;
//     if(n==0){
//         return s;
//     }
//     s=1+x*s/n;
//     return e(x,n-1);
// }

double e(int x, int n){
    double s=1;
    for(;n>0;n--)
        s=1+x*s/n;
    return s;
}
int main(){
    printf("%lf",e(2,30));//by increasing n value will become more precise
    return 0;
}