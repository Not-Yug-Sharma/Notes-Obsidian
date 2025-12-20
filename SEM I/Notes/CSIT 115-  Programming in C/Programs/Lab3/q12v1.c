#include <stdio.h>
#include <windows.h>

int main() {
    int arr[10], search;
    int index = -1;

    printf("Enter 10 integer numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d) ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to search: ");
    scanf("%d", &search);
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("Checking: [");
        for (int j = 0; j < 10; j++) {
            if (j <= i) printf("#");
            else printf(".");
        }
        printf("] %d%%", (i + 1) * 10);
        
        fflush(stdout);

        if (arr[i] == search) {
            index = i;
        }

        Sleep(200);

        if (i < 9) printf("\r");
    }

    printf("\n\n");
    
    if (index != -1) {
        printf("Number %d found in the array at position %d index=arr[%d].\n", search, index + 1, index);
    } else {
        printf("Number %d not found in the array.\n", search);
    }

    return 0;
}