#include<stdio.h>
void force(float mass);
int main(){
    float bmass;
    printf("Enter mass of body =");
    scanf("%f",&bmass);
    force(bmass);
    return 0;
}
void force(float mass){
    float forces;
    forces = mass*9.8;
    printf("Force of attraction = %.2f ",forces);
}