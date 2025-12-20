// WAP to input 10 numbers into an array and calculate the sum of odd numbers only.
#include <stdio.h>

int main(){
    int arr[10], sum = 0;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d) ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0) {
            printf(" +%d ",arr[i]);
        }
    }
    printf("= %d\n", sum);
    return 0;
}