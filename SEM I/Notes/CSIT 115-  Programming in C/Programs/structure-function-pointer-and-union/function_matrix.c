#include<stdio.h>
void in(int a[3][3]){
    printf("Enter the elements of the 3x3 matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
void out(int a[3][3]){
    printf("The 3x3 matrix is:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
}
void sumab(int a[3][3], int b[3][3], int c[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
void diffab(int a[3][3], int b[3][3], int c[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

int main(){
    int a[3][3], b[3][3], c[3][3];
    printf("Matrix A:\n");
    in(a);
    printf("Matrix B:\n");
    in(b);
    sumab(a, b, c);
    printf("\033[H\033[J");
    printf("Matrix A:\n");
    out(a);
    printf("Matrix B:\n");
    out(b);
    printf("Sum of A and B:\n");
    out(c);
    diffab(a, b, c);
    printf("Difference of A and B (A - B):\n");
    out(c);
    return 0;
}
