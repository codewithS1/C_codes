#include<stdio.h>
void fun(int n){
        if(n>0){
            printf("%d\n",n);
            fun(n-1); //Decending
            fun(n-1);//Ascending
            
        }
    }
int main(){
    int x = 3;
    fun(x);
    return 0;
}