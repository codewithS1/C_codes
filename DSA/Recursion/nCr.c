#include<stdio.h>

int NCR(int n,int r){
    if( r==0 || r==1 )
        return 1;
    else
        // return 0;
        return NCR(n-1,r-1)+NCR(n-1,r);
    
}
int main(){
    printf("%d",NCR(5,2));
    return 0;
}