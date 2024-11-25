#include<stdio.h>
int main(){

    int P,T,R;
     
     printf("enter principle");
     scanf("%d",&P);

     printf("enter time");
     scanf("%d",&T);

     printf("enter rate");
     scanf("%d",&R);

     printf("Simple interest is: %d", (P*T*R)/100);
}