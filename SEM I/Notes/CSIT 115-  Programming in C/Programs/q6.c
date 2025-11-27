#include <stdio.h>
#include <conio.h> 

int main(){
    int a, b, sum, difference, product, mod;
    float quotient;

    printf("Enter the 2 integer: ");
    scanf("%d%d", &a, &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    if(b != 0){
        quotient = a / b;
    } else {
        printf("...... Seriously? Trying to divide by zero? Grow up.\n");
        return 1; 
    }
    if (a < b && a!=0) {
        mod= b % a;
    }
    else if(b < a && b!=0){
        mod= a % b;
    }

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Modulus: %d\n", mod);

    return 0;
}