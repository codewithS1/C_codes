#include <stdio.h>
#include <stdlib.h>
    int main()
    {   while(1){
        int x;
        printf("\n\n 1.Area of circle");
        printf("\n 2.Area of rectangle");
        printf("\n 3.Average of 3 number");
        printf("\n 4.Exit");
        printf("\n Enter your choice\n");
        scanf("%d", &x);

        int a, b, c, d, e, h, i;
        float f, g;
        switch (x)
        {

        case 1:
            printf("Enter radius of a circle\n");
            scanf("%d", &a);
            f = 3.14 * a * a;
            printf("Area of circle is %f", f);
            break;

        case 2:
            printf("Enter length and breath of a circle\n");
            scanf("%d %d", &b, &c);
            d = b * c;
            printf("Area of a circle is %d", d);
            break;

        case 3:
            printf("Enter three no\n");
            scanf("%d %d %d", &e, &h, &i);
            g = (e + h + i) / 3.0;
            printf("Average of three number is %f", g);
            break;

        case 4:
            exit(0);

        default :
            printf("Invalid choice");
            
        }
    }
        return 0;
    }