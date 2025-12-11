// Program to compare 2 integers

#include<stdio.h>

int main(){
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a > b){
        printf("%d is greater than %d\n", a, b);
    }
    else if (a < b){
        printf("%d is greater than %d\n", b, a);
    }
    else{
        printf("Both numbers are equal.\n");
    }
    return 0;
}