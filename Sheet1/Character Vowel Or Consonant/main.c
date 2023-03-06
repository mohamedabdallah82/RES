#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a charcter:\n");
    scanf("%c",&ch);
    if (isalpha(ch)){
        switch (ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is vowel",ch);
                break;
            default:
                printf("%c is Consonant",ch);
                break;
        }
    }
    else
        printf("Wrong entry!");
    return 0;
}
