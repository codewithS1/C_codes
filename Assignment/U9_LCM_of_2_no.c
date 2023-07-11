#include<stdio.h>
int main(){
    int ia=1,ib=1,a,b,la,lb;
    printf("Enter 2 number;\n");
    scanf("%d %d",&a,&b);

    printf("Enter number till you want to multiply 1st number;\n");
    scanf("%d",&la);

    printf("Enter number till you want to multiply 2nd number;\n");
    scanf("%d",&lb);
    
    int c,d=1;
    for(ia;ia<=la;ia++){
        c=(ia*a);
        printf("%d ",c);
        if(d==100){
            ib=1;}
        
        // int d;
        for(ib;ib<=lb;ib++){
        d=(ib*b);
        printf("%d ",d);
        if(c==d){
            printf("*");
        }
    }
    }

    // for(ib;ib<=lb;ib++){
    //     int d=(ib*b);
    //     printf("%d ",d);
    //     if(c==d){
    //         printf("*");
    //     }
    // }
    return 0;
}