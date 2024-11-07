#include<stdio.h>
int num(int);
int main(){
    int no,result;
    printf("Enter a number\n");
    scanf("%d",&no);
    result=num(no);
    return 0;
}
int num(int n){
    int r;
    r=n%2;
    if(r==0){
        printf("Even");
        return 1;}
    else{
        printf("Odd");
    }
    
}