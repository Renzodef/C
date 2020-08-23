#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    //   The malloc() function allocates a specified number of contiguous bytes in memory.
    ptr = malloc(10 * sizeof(*ptr)); /* a block of 10 ints */
    if (ptr != NULL)
        *(ptr + 2) = 50;        /* assign 50 to third int */
    printf("%d", *(ptr + 2)); /* 50 */
    // The free() function is a memory management function that is called to release memory. 
    // By freeing memory, you make more available for use later in your program.
    free(ptr);
    return 0;
}