#include <stdio.h>
#include <conio.h>

int main(){
    float length, breadth, area, perimeter;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f%f", &length, &breadth);\
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of Rectangle: %.2f sq. units\n", area); //The format specifier %.2f is used to display float values with 2 decimal places
    printf("Perimeter of Rectangle: %.2f units\n", perimeter);
    return 0;
}