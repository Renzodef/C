#include <stdio.h>

// The #ifdef, #ifndef, and #undef Directives
// The #ifdef, #ifndef, and #undef directives operate on macros created with #define.
// For example, there will be compilation problems if the same macro is defined twice,
// so you can check for this with an #ifdef directive. Or if you may want to redefine a macro, you first use #undef.

// Conditional compilation of segments of code is controlled by a set of directives: #if, #else, #elif, and #endif.
// For example:
// #define LEVEL 4
// int main() {
//   #if LEVEL > 6
//     /* do something */
//   #elif LEVEL > 5
//     /* else if branch */
//   #elif LEVEL > 4
//     /* another else if */
//   #else
//     /* last option here */
//   #endif
//   return 0;
// }

#define RATE 0.08
#ifndef TERM
#define TERM 24
#endif

int main()
{
#ifdef RATE /* this branch will be compiled */
#undef RATE
    printf("Redefining RATE\n");
#define RATE 0.068
#else /* this branch will not be compiled */
#define RATE 0.068
#endif

    printf("%f  %d\n", RATE, TERM);

    return 0;
}