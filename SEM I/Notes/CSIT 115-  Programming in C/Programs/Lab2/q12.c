// take a number and calculte the sum of its digits
#include<stdio.h>

int main(){
    double sum=0;
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    while(n!=0){
        sum += n % 10; // sum = sum + (n % 10);
        n = n / 10;
    }
    printf("Sum of digits: %lf\n", sum);
    return 0;
}