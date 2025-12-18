// Write a program to count the number of even and odd elements in an integer array of size 10.
#include <stdio.h>

int main(){
    int arr[10], even = 0, odd = 0;
    printf("Enter 10 integer numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d) ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);
    return 0;
}