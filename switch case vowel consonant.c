#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter an alphabet:\n");
    scanf("%c",&alphabet);

    switch(alphabet){
        case 'a':
        printf("It's a vowel");
        break;
        case 'e':
        printf("It's a vowel");
        break;
        case 'i':
        printf("It's a vowel");
        break;
        case 'o':
        printf("It's a vowel");
        break;
        case 'u':
        printf("It's a vowel");
        break;
        
        default:
        printf("It's a consonant");
        break;
    }
    return 0;
}