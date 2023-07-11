#include<stdio.h>
int main(){
    int a,b=2,c=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(b;a>=b;b++){
        // printf("%d\n",b);
        if(a%b==0){
            c=c+1;
        }
    }
    if (c>1){
        printf("NOT PRIME");
    }else{
        printf("PRIME");
    }
    return 0;
}