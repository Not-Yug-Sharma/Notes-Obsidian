// Program to check age and determine voting eligibility
#include<stdio.h>

int main(){
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    if (age >= 18){
        printf("You are eligible to vote.\n");
    }
    else{
        printf("You are not eligible to vote.\n");
    }
    return 0;

}