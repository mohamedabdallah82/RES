#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num =0;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf((num%2 == 0)? "The number is even." : "The number is odd.");
    return 0;
}
