#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer:");
    scanf("%i", &n);

    if (n > 0)
        printf("Absolute value : %i\n", n);
    else
        printf("Absolute value : %i\n", -n);

    return 0;
}