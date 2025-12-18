// WAP to input an integer number n and print all prime numbers from 1 upto n.

#include <stdio.h>

int main(){
    int n, factor;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    
    for (int num = 2; num <= n; num++) {
        factor = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0)
                factor++;
        }
        if (factor == 2) {
            printf("%d \t", num);
        }
    }
    printf("\n");
    return 0;
}