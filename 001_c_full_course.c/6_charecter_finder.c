#include<stdio.h>
int main(){
    char a;
    printf("Enter value\n");
    scanf("%c",&a);
    // a=getch();
    if('A'<=a && a<'Z'){
        printf("Capital alphabet\n");
    }
    else if('a'<=a && a<='z'){
        printf("Small alphabet\n");
    }
    else if(a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    
    return 0;
}

// agr ASCII value m nahi like to '' andar character ko likhna padta hain