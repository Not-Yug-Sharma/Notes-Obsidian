// take a number and calculte the sum of its digits
#include<stdio.h>

int main(){
    int sum=0;
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    while(n!=0){
        sum += (int)n % 10; // sum = sum + (n % 10);
        n = (int)n / 10;
    }
}