// Program to check if the integer is even/odd
#include<stdio.h>

int main(){
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("%d is even.\n", a);
    }
    else{
        printf("%d is odd.\n", a);
    }
    return 0;
}