#include<stdio.h>

int main(){
    int arr[4][4], transpose[4][4];
    printf("Enter elements of 4x4 matrix:\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            transpose[j][i] = arr[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}