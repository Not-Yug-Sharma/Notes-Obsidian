//WAP to input 10 integer numbers into an array, input another number and search weather that number is in the array or not.

#include <stdio.h>

int main(){
    int arr[10], search;
    printf("Enter 10 integer numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d) ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to search: ");
    scanf("%d", &search);
    int index=0;

    for (int i = 0; i < 10; i++) {
       printf("Checking progress: %d/10\n", i+1);
       if (arr[i] == search) {
           index = i + 1;
           break;
    }
}
    if (index != 0) {
        printf("Number %d found in the array at position %d index=%d.\n", search, index, index - 1);
        } else {
        printf("Number %d not found in the array.\n", search);
        }
    
    return 0;   
}
