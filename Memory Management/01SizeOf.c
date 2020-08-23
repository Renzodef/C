#include <stdio.h>

int main()
{
    int x;
    // sizeof return the number of bytes occupied
    printf("%d", sizeof(x)); /* output: 4 */
    printf("\n");
    int arr[10];
    printf("%d", sizeof(arr)); /* output: 40 */
    return 0;
}