#include <stdio.h>
int palindrome(int);

int main(){
int number;
printf("Enter any number:");
scanf("%d",&number);

if (palindrome(number)){
    printf("palindrome");
} else{
    printf("Not palindrome");
}

}

int palindrome(int num){
    int original = num; //252
    int reversed = 0; //0
    
    while(num > 0){
        int digit = num % 10;
        reversed = (reversed * 10)+ digit;
        num = num/10;

    }
    return original == reversed;
}