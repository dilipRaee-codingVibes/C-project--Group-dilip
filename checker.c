#include <stdio.h>
#include <string.h>

int main() {
    char val[50];   // buffer to hold the final string
    int a = 123;
    int b = 345;
    float c = 123.4445;

    // Convert integers to strings and concatenate
    sprintf(val, "%d%s%d\t%.3f", a, "number", b, c);

    printf("%s\n", val);  // Output: 123number345
    return 0;
}
