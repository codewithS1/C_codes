#include<stdio.h>
int main(){
    int a[10]={10,25,56,45,99,145,14,1,151,10},sum=0,i,smallest;
    printf("Enter 10 Values in a array :\n");


    for (i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for (i=0;i<10;i++){
        if(a[i] < smallest){
            smallest=a[i];
        }

    }
    printf("Smallest of all= %d",smallest);


    return 0;
}