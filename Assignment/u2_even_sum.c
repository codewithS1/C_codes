#include<stdio.h>
int main(){
    int a,b=1,sum=0;
    printf("Enter a number\n");
    scanf("%d",&a);
    int c=a*2;
    for(a;c>=b;b++){
        // printf("%d\n",b);
        if(b%2==0){
            sum=sum+b;
            printf("%d\n",b);
        }
    }
    printf("sum is %d",sum);
    return 0;
}