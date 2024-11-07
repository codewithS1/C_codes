#include<stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    else
        return fact(n-1)*n;
}

// // using loop
// int fact(int n){
//     int i=1,s=1;
//     if(n==0)
//         return 1;
//     else    
//         for(i;i<=n;i++){
//             s=s*i;
//         }
//         return s;
// }

int main(){
    int r;
    r=fact(5);
    printf("%d",r);
    return 0;
}