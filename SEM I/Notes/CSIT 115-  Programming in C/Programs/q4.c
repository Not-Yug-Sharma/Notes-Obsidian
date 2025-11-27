#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    float radius, area, circumference;
    float pi = 3.14159;

    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);
    area = pi * pow(radius,2);//pow() is a function in math.h that works as ^ operator
    circumference = 2 * pi * radius;

    printf("Area of Circle: %.2f sq. units\n", area);
    printf("Circumference of Circle: %.2f units\n", circumference);
    return 0;
}