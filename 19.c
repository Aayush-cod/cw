#include<stdio.h>
int main(){

int balance = 10000;
int choice;
int amount;
printf("Welcome to XYZ Banking\n");
printf("Choose option 1-3\n");
printf("1. Add funds/Deposits\n 2.Withdraw Funds\n 3.Check Balance");

scanf("%d",&choice);

if(choice == 1){

printf("enter amount to deposit\n");
scanf("%d",&amount);

if(amount<0 || amount ==0){
    printf("amount is invalid.");
}else {
    balance = balance + amount ;
    printf("Your new balance is %d",balance);
}
}else if(choice == 2){
printf("enter amount to withdraw\n :");
scanf("%d",&amount);

if(amount>balance){
    printf("Insufficient Balance");
}else{
    balance = balance - amount ;
    printf("Withdrwal successful\n");
    printf("Your remaining balance is %d",balance);
}

}else if(choice == 3){
printf("Your current balance is %d", balance);

}else{
    printf("Invalid Input, Please try again.");
}





}