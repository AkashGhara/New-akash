#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number to check even or odd:\n ");
    scanf("%d", &num);

    switch(num % 2)
    {
        case 0: 
            printf("Even number");
            break;
        case 1: 
            printf("Odd number");
            break;
    }

    return 0;
}