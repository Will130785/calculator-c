#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a;
    int b;
    int choice;

    printf("Enter two integer values\n");
    printf("Enter 1 to add integers together\n");
    printf("Enter 2 to subtract first integer from second\n");
    printf("Enter 3 to subtract second integer from first\n");
    printf("Enter 4 to divide first integer by second\n");
    printf("Enter 5 to divide second integer by first\n");
    printf("Enter 6 to multiply integers\n");
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &choice);

    switch (choice)
    {
    case 1:
        printf("%d", a + b);
        break;
    case 2:
        printf("%d", a - b);
        break;
    case 3:
        printf("%d", b - a);
        break;
    case 4:
        if (a == 0)
        {
            printf("Cant divide a 0 value");
            break;
        }
        printf("%d", a / b);
        break;
    case 5:
        if (b == 0)
        {
            printf("Cant divide a 0 value");
            break;
        }
        printf("%d", b / a);
        break;
    case 6:
        printf("%d", a * b);
        break;
    default:
        printf("Choice not recognised");
    }

    return 0;
}
