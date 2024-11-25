#include<stdio.h>
int main(){

int principle, rate, time;

printf("enter principle");
scanf("%d",&principle);

printf("enter rate");
scanf("%d",&rate);

printf("enter time");
scanf("%d",&time);

printf("compound interest is : %d", principle *pow((1+rate/100,time))-principle);


}