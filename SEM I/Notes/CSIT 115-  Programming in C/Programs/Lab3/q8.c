//WAP to input 10 float numbers into an array calculate the sum of those numbers that are divisible by either 3 or 5.
#include <stdio.h>
int main(){
    float arr[10], sum = 0.0;
    printf("Enter 10 float numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d) ", i + 1);
        scanf("%f", &arr[i]);
        if (((int)arr[i] % 3 == 0) || ((int)arr[i] % 5 == 0)) {
            sum += arr[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (((int)arr[i] % 3 == 0) || ((int)arr[i] % 5 == 0)) {
            printf(" +%.2f ",arr[i]);
        }
    }
    printf("The sum of numbers divisible by either 3 or 5 is: %.2f\n", sum);
    return 0;
}