// WAP to input 10 float numbers into an array and display them in reverse order
#include <stdio.h>

int main(){
    float arr[10];
    printf("Enter 10 float numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d) ", i + 1);
        scanf("%f", &arr[i]);
    }
    printf("The numbers in reverse order are:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%.2f\t", arr[i]);
    }
    return 0;
}
