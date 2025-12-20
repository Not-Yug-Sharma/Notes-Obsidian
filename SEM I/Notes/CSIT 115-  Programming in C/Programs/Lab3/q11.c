// WAP to input 10 integer numbers into an array and separate positive and negative numbers into two different arrays and finally print them.

#include <stdio.h>

int main(){
    int arr[10], pos[10], neg[10];
    int posCount = 0, negCount = 0;

    printf("Enter 10 integer numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d) ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] >= 0) {
            pos[posCount++] = arr[i];
        } else {
            neg[negCount++] = arr[i];
        }
    }

    printf("Positive numbers:\n");
    for (int i = 0; i < posCount; i++) {
        printf("%d ", pos[i]);
    }
    printf("\n");

    printf("Negative numbers:\n");
    for (int i = 0; i < negCount; i++) {
        printf("%d ", neg[i]);
    }
    printf("\n");

    return 0;
}