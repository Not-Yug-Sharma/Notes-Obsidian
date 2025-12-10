#include <stdio.h>
#include <conio.h>

int main(){
    int a;
    float b, sum, mul, div1, div2, diff;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a float: ");
    scanf("%f", &b);
    sum = a + b;
    mul = a * b;
    div1 = a / b;
    div2 = b / a;
    diff = a - b;
    printf("Sum: %.2f\n", sum);
    printf("Multiplication: %.2f\n", mul);
    printf("Division (a/b): %.2f\n", div1);
    printf("Division (b/a): %.2f\n", div2);
    printf("Difference: %.2f\n", diff);
    return 0;
}