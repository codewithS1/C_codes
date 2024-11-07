#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("ENTER TWO NUMBER");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
    if(a%i==0&&b%i==0)
    printf("%d",i);
    }
    i=i;
    return 0;
}