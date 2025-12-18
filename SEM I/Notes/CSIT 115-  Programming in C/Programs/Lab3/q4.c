//WAP to input five integer numbers into an array and print them.

#include <stdio.h>

int main(){
    int a[5];
    printf("Enter five integer numbers:\n");
    for (int i=0; i<5; i++){
        printf("%d) ",i+1);
        scanf("%d", &a[i]);
    }
    printf("The numbers are:\n");
    for (int i=0; i<5; i++){
        printf("%d\t", a[i]);
    }
}