/*
The void Pointer
A void pointer is used to refer to any address type in memory and has a declaration that looks like:
void *ptr;
The following program uses the same pointer for three different data types:
*/

#include <stdio.h>

int main()
{
    int x = 33;
    float y = 12.4;
    char c = 'a';
    void *ptr;
    ptr = &x;
    printf("void ptr points to %d\n", *((int *)ptr));
    ptr = &y;
    printf("void ptr points to %f\n", *((float *)ptr));
    ptr = &c;
    printf("void ptr points to %c", *((char *)ptr));
    return 0;
}