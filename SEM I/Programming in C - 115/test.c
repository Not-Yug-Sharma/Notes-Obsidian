#include <stdio.h>

int main() {
    char a[] = "Hello";  // The empty [] let's compiler determine size
    char b[] = "World";
    printf("%s %s\n", a, b);
    return 0;
}