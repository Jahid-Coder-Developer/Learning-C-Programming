#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int i1 = 10; // Interger variable
    float f = 4.55; // Float variable
    char c = 'C'; // Character variable
    bool b = true; // Boolean variable
    long long int i2 = 1234567891011121314; // Long long integer variable
    double d = 123456.123456; // Double variable  

    printf("This is an integer: %d\n", i1);
    printf("This is a float: %f\n", f);
    printf("This is a character: %c\n", c);
    printf("This is a boolean: %d\n", b);
    printf("This is a long long integer: %lld\n", i2);
    printf("This is a double: %lf\n", d);

    return 0;
}