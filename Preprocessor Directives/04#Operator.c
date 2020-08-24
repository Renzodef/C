#include <stdio.h>

// The # Operator
// The # macro operator is called the stringification or stringizing operator and tells the
// preprocessor to convert a parameter to a string constant.
// White space on either side of the argument are ignored and escape sequences are recognized.

#define TO_STR(x) #x

int main()
{
    // Converting number to string
    printf("%s", TO_STR(12 + 12)); // 12+12
    
    return 0;
}