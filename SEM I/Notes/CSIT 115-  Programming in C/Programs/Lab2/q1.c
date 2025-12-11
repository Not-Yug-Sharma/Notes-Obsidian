// Program  to demonstrate the use of Bitwise Operators

#include<stdio.h>

int main(){
    int a = 5;      // 0101
    int b = 3;      // 0011
    printf("a = %d, b = %d\n", a, b);
    printf("Bitwise AND (a & b) = %d\n", a & b);
    printf("Bitwise OR (a | b) = %d\n", a | b);
    printf("Bitwise XOR (a ^ b) = %d\n", a ^ b);
    printf("Bitwise NOT (~a) = %d\n", ~a);
    printf("Left Shift (a << 1) = %d\n", a << 1);
    printf("Right Shift (a >> 1) = %d\n", a >> 1);
    return 0;

}