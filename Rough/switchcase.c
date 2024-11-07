#include <stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("1.Calc LCM of two numbers\n");
    printf("2.Calc sum of digits of a numbers\n");
    printf("3.Vol of cuboid\n");
    printf("4.Check wheather given no. is prime or not \n");
    printf("5.Exit\n");
    while(1)
    {
        printf("\nEnter a choice:");
        scanf("%d",&x);
        switch(x)
        {
            case 1: ;
        int a,c,i;
        printf("Enter two Numbers to obt their LCM:");
        scanf("%d%d",&a,&c);
        i=a>c?a:c;
        for(i;i<=a*c;i++)
        if(i%a==0&&i%c==0)
        {
            printf("LCM is %d",i);
            break;
        }
        // return 0;    
        break;
        case 2:;
        int n2,j,s;
        printf("Enter a no. to calc its sum of digit:");
        scanf("%d",&n2);
        for(s=0;n2>0;j++)
        {
            s=s+n2%10;
            if(n2<=9)
            printf("Sum of its digit is %d",s);
            n2/=10;
        }      
        break;
        case 3:;
        int l,b,h,v;
        printf("Enter L,B,H of a cuboid:");
        scanf("%d%d%d",&l,&b,&h);
        printf("Volume is %d",l*b*h);
        break;
        case 4:;
            int n,k;
        printf("Enter a number:");
        scanf("%d",&n);
        for(k=2;k<n;k++)
        {
            if(n%k==0)
            {
                printf("NOT PRIME number");      
                break;
            }
        }
        if(k==n)
        printf("PRIME number");
        break;
        case 5:
        exit(0);
        default:
        printf("Invalid choice,Retry");
    }
        }
    }