#include <stdio.h>
#include <conio.h>

int main(){
    int a, b;
    printf("Enter the 2 integers: ");
    scanf("%d%d", &a, &b);
    
    printf("Logical Operations between %d and %d:\n", a, b);
    printf("(%d > 0) && (%d > 0) : %s\n", a, b, ((a > 0) && (b > 0)) ? "True" : "False"); /* This statement basically means: if(a>0 && b>0){printf("true");}
                                                                                                                             else {printf("false");} */
    printf("(%d > 0) || (%d > 0) : %s\n", a, b, ((a > 0) || (b > 0)) ? "True" : "False");/* This statement basically means: if(a>0 || b>0){printf("true");}
                                                                                                                             else {printf("false");} */
    printf("! (%d > 0) : %s\n", a, (!(a > 0) ? "True" : "False"));/* This statement basically means: if(a>0){printf("false");}
                                                                                                     else {printf("True");} */
    printf("! (%d > 0) : %s\n", b, (!(b > 0) ? "True" : "False"));

    return 0;
}