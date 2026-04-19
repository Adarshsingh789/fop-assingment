#include <stdio.h>

void swapValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapReference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d b = %d", a, b);

    swapValue(a, b);
    printf("\nAfter swapValue (no change): a = %d b = %d", a, b);

    swapReference(&a, &b);
    printf("\nAfter swapReference (changed): a = %d b = %d", a, b);

    return 0;
}
