#include<stdio.h>
int main(){
    int a,s,s1,s2,s3;
    float b;
    char c;
    double d;
    s=sizeof(a);
    s1=sizeof(b);
    s2=sizeof(c);
    s3=sizeof(d);
    printf("size of \nint = %d \nfloat = %d\nchar = %d\ndouble = %d ",s,s1,s2,s3);
    return 0;
}