#include <stdio.h>
#include <conio.h> 

int main(){
    int a, b;
    printf("Enter the two integer: ");
    scanf("%d%d", &a,&b);
    printf("Relational Operations between %d and %d:\n", a, b);
    printf("%d > %d : %s\n", a, b, (a > b) ? "True" : "False"); /* This statement basically means: if(a>b){printf("true");}
                                                                                                    else {printf("false");} */
    printf("%d < %d : %s\n", a, b, (a < b) ? "True" : "False");
    printf("%d >= %d : %s\n", a, b, (a >= b) ? "True" : "False");
    printf("%d <= %d : %s\n", a, b, (a <= b) ? "True" : "False");
    printf("%d == %d : %s\n", a, b, (a == b) ? "True" : "False");
    printf("%d != %d : %s\n", a, b, (a !=   b) ? "True" : "False");
    return 0;
}