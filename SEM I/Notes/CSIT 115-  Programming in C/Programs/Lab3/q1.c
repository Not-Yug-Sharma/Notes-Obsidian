//WAP to input any integer number and check it either it is prime or not.

#include <stdio.h>


int main(){
    int num, factor=0;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    for (int i=1; i<=num;i++){
        if (num %i==0)
            factor++;
    }
    
    if(num==1)
        printf("Neither Prime nor Composite.");
  
    else if (factor==2)
        printf("The number is prime.");
    else
        printf("The number is not prime.");

        return 0;
}