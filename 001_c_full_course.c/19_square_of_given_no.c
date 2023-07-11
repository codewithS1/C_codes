#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("Enter a number \n");
    scanf("%f",&a);
    b=pow(a,2);
    printf("Square of %f is %f\n",a,b);
    c=sizeof(a);
    printf("%d",c);
    return 0;
}