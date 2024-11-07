#include<stdio.h>
int main()
{
    int i,j,a[5],m,k;
    printf("Enter 5 numbers:");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=4;i++)
    {
        for(j=i;j<=4;j++)
        if(a[i]>a[j])
        {
            k=a[j];
            a[j]=a[i];
            a[i]=k;     
        }    
    }
    for(k=0;k<=4;k++)
    printf(" %d",a[k]);

    return 0;
}