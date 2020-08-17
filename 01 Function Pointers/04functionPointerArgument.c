/*
Function Pointers as Arguments
Another way to use a function pointer is to pass it as an argument to another function.
A function pointer used as an argument is sometimes referred to as a callback function 
because the receiving function "calls it back".
The qsort() function in the stdlib.h header file uses this technique.
Quicksort is a widely used algorithm for sorting an array.
To implement the sort in your program, you need only include the stdlib.h file 
and then write a compare function that matches the declaration used in qsort:
void qsort(void *base, size_t num, size_t width, int (*compare)(const void *, const void *)) 
To breakdown the qsort declaration:
void *base A void pointer to the array.
size_t num The number of elements in the array.
size_t width The size of an element.
int (*compare (const void *, const void *) A function pointer which has two arguments 
and returns 0 when the arguments have the same value, <0 when arg1 comes before arg2, and >0 when arg1 comes after arg2.
The following program sorts an array of ints from low to high using qsort:
*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);

int main()
{
    int arr[5] = {52, 23, 56, 19, 4};
    int num, width, i;
    num = sizeof(arr) / sizeof(arr[0]);
    width = sizeof(arr[0]);
    qsort((void *)arr, num, width, compare);
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}

int compare(const void *elem1, const void *elem2)
{
    if ((*(int *)elem1) == (*(int *)elem2))
        return 0;
    else if ((*(int *)elem1) < (*(int *)elem2))
        return -1;
    else
        return 1;
}
