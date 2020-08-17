/*
Array of Function Pointers
An array of function pointers can replace a switch or an if statement for choosing an action, 
as in the following program:
*/

#include <stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

int main()
{
    int x, y, choice, result;
    int (*op[4])(int, int);
    op[0] = add;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = divide;
    int b = 1;
    while (b)
    {
        printf("Enter 0 to add, 1 to subtract, 2 to multiply, 3 to divide or 4 to exit: ");
        scanf("%d", &choice);
        if (choice == 4)
        {   
            b = 0;
            break;
        }
        printf("Enter two integers: ");
        scanf("%d%d", &x, &y);
        result = op[choice](x, y);
        printf("%d \n", result);
    }
    return 0;
}

int add(int x, int y)
{
    return (x + y);
}

int subtract(int x, int y)
{
    return (x - y);
}

int multiply(int x, int y)
{
    return (x * y);
}

int divide(int x, int y)
{
    if (y != 0)
        return (x / y);
    else
        return 0;
}