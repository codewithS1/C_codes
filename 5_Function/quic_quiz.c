#include<stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();
int main(){
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}

void goodmorning(){
    printf("GOOD MORNING\n");
};

void goodafternoon(){
    printf("GOOD afternoon\n");
};

void goodnight(){
    printf("GOOD night\n");
};