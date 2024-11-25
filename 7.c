#include<stdio.h>
int main(){

    float radius, height;

    printf("enter radius");
    scanf("%f",&radius);

    printf("enter height");
    scanf("%f",&height);

    printf("volume of cylinder is : %f", 3.14 * radius * radius * height);
}