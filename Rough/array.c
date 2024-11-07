#include<stdio.h>
void rotate(int b[],int s,int n,int d);
int main()
{
    int S,I,N,D;
    printf("Enter the size of an array:");
    scanf("%d",&S);
    printf("\nEnter rotation by n position in d dirn:");
    scanf("%d%d",&N,&D);
    int a[S];
    rotate(a,S,N,D);
}
void rotate(int b[],int s,int n,int d)
{
    int k,i,j;
    printf("Enter %d numbers:",s);
    for(i=0;i<s;i++)
    scanf("%d",&b[i]);
    if(d>0)
    for(j=0;j<=n;j++)
    {
        if(j>s)
        {
            k=b[j+1];
            b[j+1]=b[j];
            b[j+2]=k;
        }
        else
        {
            j=0;
            b[j]=b[s-1];
        }           
    }
    else
    for(j=0;j<=n;j++)
    {
        if(j>0)
        {
            k=b[j+1];
            b[j]=b[j+1];
        }
        else
        b[n-1]=b[0];
    }
    for(k=0;k<s;k++)
    printf(" %d ",b[k]);
}
