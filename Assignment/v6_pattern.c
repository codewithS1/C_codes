#include <stdio.h>
#include<stdlib.h>
int main()
{
    // int n = 6;
    int a = 3;
    int n = a*2;
    int row;
    int col;
    int no_spaces=1;
    for (row = 1; row <= n; row++)
    {   
        for(no_spaces;no_spaces<=a;no_spaces++){
                int no_spaces=a-col;
            printf(" ");
        }
        for (col = 1; col <= row; col++)
        {
            if(row!=a){  
                printf("* ");}
            if (row == a)
            {
                n = 1;
                for (row = a; row >= n; row--)
                {
                    for (col = 1; (row+1) - col; col++)
                    {
                        printf("* ");
                    }
                    printf("\n");
                    // exit(1);
                }
                exit(1);
            }
        }
        printf("\n");
    }
    return 0;
}