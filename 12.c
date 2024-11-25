#include<stdio.h>
int main(){
 
 float weight, height, bmi;
 printf("enter your weight(kg) :");
 scanf("%f",&weight);

 printf("enter your height(cm) :");
 scanf("%f",&height);

 
 
bmi = weight / (height * height);
 
 
 

 if (bmi< 18.5){
    printf("underweight");
 } else if(bmi>=18.5 && bmi< 24.9 ){
    printf("Normal weight");
 }else if(bmi>= 25 && bmi < 29.9 ){
    printf("Overweight");
 }else if(bmi>=30){
    printf("Obese");
 }





}