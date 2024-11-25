#include<stdio.h>
void main(){

    int Physics, Math, English, Nepali, Chemistry;
    float Total, Average, percentage;

    printf("enter marks of Physics :");
    scanf("%d",&Physics);

    printf("enter marks of Math :");
    scanf("%d",&Math);

    printf("enter marks of English :");
    scanf("%d",&English);

    printf("enter marks of Nepali :");
    scanf("%d",&Nepali);

    printf("enter marks of Chemistry : ");
    scanf("%d",&Chemistry);

    Total = Physics + Math + English + Nepali + Chemistry;
    Average = Total/5;
    percentage = (Total/600)*100;

    printf("Total is : %f,\n",Total);
    printf("Average is : %f,\n",Average);
    printf("percentage is : %f,\n",percentage);







}