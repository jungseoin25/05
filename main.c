#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer:");
    scanf("%i", &n);

    if (n == 0)
        printf("Zero\n");
    else if (n > 0)
        printf("Positive\n");
    else
        printf("Negative\n");

    return 0;
}