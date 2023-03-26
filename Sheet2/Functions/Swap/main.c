#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0,n2=0;

    printf("Enter 1st number:\n");
    scanf("%d",&n1);

    printf("Enter 2nd number:\n");
    scanf("%d",&n2);

    Swap_by_value(n1,n2);
    printf("After swapping by value:\n1st number = %d\n2nd number = %d\n",n1,n2);

    Swap_by_reference(&n1,&n2);
    printf("After swapping by reference:\n1st number = %d\n2nd number = %d",n1,n2);

    return 0;
}

void Swap_by_value(int n1, int n2)
{

    n1 +=  n2;
    n2 = n1 - n2;
    n1 -= n2;

}


void Swap_by_reference(int*n1 , int* n2)
{

    *n1 +=  *n2;
    *n2 = *n1 - *n2;
    *n1 -= *n2;

}
