#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number:\n ");
    scanf("%d", &num);

    switch (num > 0)
    {
        case 1:
            printf("%d is positive.", num);
            break;
        case 0:
            switch (num == 0)
            {
                case 1:
                    printf("%d is zero.", num);
                    break;
                default:
                    printf("%d is negative.", num);
                    break;
            }
            break;
    }

    return 0;
}
