#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int sum=0;
    for(int x;x<5;x++){
        sum=sum+arr[x];
    }
    printf("sum = %d",sum);
    return 0;
}