//WAP to input 5 numbers into an array and find the largest number.

#include <stdio.h>

int main(){
    int arr[5], largest;
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d) ", i + 1);
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest number is: %d\n", largest);
    return 0; 
}