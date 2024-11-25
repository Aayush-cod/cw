#include<stdio.h>
int main(){

float radius, height;

printf("enter radius");
scanf("%f",&radius);

printf("enter height");
scanf("%f",&height);

printf("area of circle : %f,\n", 3.14 * radius * radius);
printf("volume of cylinder : %f,\n", 3.14 * radius * radius * height);

}