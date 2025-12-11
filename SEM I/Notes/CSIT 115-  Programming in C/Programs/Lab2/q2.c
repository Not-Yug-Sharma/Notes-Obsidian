// Progrsm to demonstrate the use of conditional (ternary) operator

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("The greater number between %d and %d is %d\n", a, b, (a > b) ? a : b);
    printf("\nIs %d smaller than %d? %c\n", a, b, (a > b) ? "N" : "Y");
    return 0;
}