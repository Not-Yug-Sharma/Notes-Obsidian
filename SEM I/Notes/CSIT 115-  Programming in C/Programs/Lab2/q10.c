// Program to calcualte factorial

#include<stdio.h>

int main(){
    int n;
    double factorial = 1.0;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Error! Factorial of a negative number doesn't exist.\n");
    }
    else{
        for (int i = 1; i <= n; i++){
            factorial *= i; // factorial = factorial * i;
        }
        printf("Factorial of %d = %.0f\n", n, factorial);
    }
}