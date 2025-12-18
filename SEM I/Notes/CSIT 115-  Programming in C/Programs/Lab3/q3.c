/*WAP to input an integer number n and calculate the sum of the
following series
- 1! + 2! + 3!+ …………….. +n!
- 1+2^2+3^3+…………..+n^n
- 1/1!+2/2!+3/3!+…………..+n/n!*/

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    long long fact, sum1 = 0, sum2 = 0;
    double sum3 = 0.0;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Calculate factorial
        fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        sum1 += fact;               // Sum for 1! + 2! + ... + n!
        sum2 += pow(i, i);         // Sum for 1 + 2^2 + ... + n^n
        sum3 += (double)i / fact;   // Sum for 1/1! + 2/2! + ... + n/n!
    }

    for(int i=1; i<=n;i++){
        printf("+%d! ",i);
    }
    printf("= %lld\n", sum1);
    for (int i=1; i<=n;i++){
        printf("(%d^%d) + ",i,i);
    }
    printf(" = %lld\n", sum2);
    for (int i=1; i<=n;i++){
        printf("(%d/%d!) + ",i,i);
    }
    printf("= %.9lf\n", sum3);

    return 0;
}