/*WAP to input 10 integer numbers into an array and the sum and
average of all array elements.*/

#include <stdio.h>

int main(){
    int arr[10], sum = 0;
    printf("Enter 10 integer numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d) ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of all array elements is: %d\n", sum);
    printf("The average of all array elements is: %.2f\n", sum / 10.0);
    return 0;
}