#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1 = 0,num_2=0;

    printf("Enter 1st number: ");
    scanf("%d",&num_1);
    printf("Enter 2nd number: ");
    scanf("%d",&num_2);

    num_1 += num_2;
    num_2 = num_1 - num_2;
    num_1 -= num_2;

    printf("After swaping:\n1st number is: %d\n2nd number is: %d",num_1,num_2);

    return 0;
}
