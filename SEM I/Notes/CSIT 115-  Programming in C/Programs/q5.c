#include <stdio.h>
#include <conio.h>

int main(){
    float p, t, r, si, a;
    printf("Enter principal amount, time(in years) and rate of interest:\n");
    scanf("%f%f%f", &p, &t, &r);

    si = (p * t * r) / 100;
    a = p + si;

    printf("Simple Interest: %.2f\n", si);
    printf("Total Amount: %.2f\n", a);

    return 0;
}