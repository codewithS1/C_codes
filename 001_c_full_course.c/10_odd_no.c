#include<stdio.h>
int main(){
    int n,a;
    printf("Enter number till you want to know odd reverse number \n");
    scanf("%d",&a);
    n=a*2;
    while(n!=-1){
        if (n%2!=0){
            printf("Value is %d\n",n);
            n=n-2;
        }
        else{
            n--;
        }
    }
    return 0;
} 