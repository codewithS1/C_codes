#include<stdio.h>
int main(){
    int a[10]={10,25,56,45,99,145,14,1,151,10},sum=0,i,greatest;
    printf("Enter 10 Values in a array :\n");
    for (i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    greatest=a[0];
    for (i=0;i<10;i++){
        if(a[i] > greatest){
            greatest=a[i];
        }

    }
    printf("Greatest of all= %d",greatest);
    return 0;
}

// 10,990,1,1,66,2,2,36,35,32