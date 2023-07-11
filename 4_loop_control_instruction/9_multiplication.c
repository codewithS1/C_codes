#include<stdio.h>
int main(){
    int n;
    int a=0;
    printf("Enter n \n");
    scanf("%d",&n);
    while(n){
        printf("%d * %d = %d \n",a,n,a*n);
        if(a==10){
            break;
        }
        a++;
    }
    return 0;
}