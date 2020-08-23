#include <stdio.h>
// The #define directive is used to create object-like macros for constants based on values or expressions.
// #define can also be used to create function-like macros with arguments that will be replaced by the preprocessor.
// When using preprocessor directives, the # must be the first character on a line. 
// But there can be any amount of white space before # and between the # and the directive.
// If a # directive is lengthy, you can use the \ continuation character to extend the definition over more than one line.
// For example:
// #define VERY_LONG_CONSTANT \
// 23.678901
#define PI 3.14
#define AREA(r) (PI * r * r)
int main()
{
    float radius = 2;
    printf("%3.2f\n", PI);
    printf("Area is %5.2f\n", AREA(radius));
    printf("Area with radius + 1: %5.2f\n", AREA(radius + 1));
    return 0;
}