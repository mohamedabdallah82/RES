#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    printf("Enter a number:\n");
    scanf("%d",&n);

    printf("Factorial of %d = %d",n,Factorial(n));

    return 0;
}

int Factorial(int n)
{

    if (n != 1)
        n *= Factorial(n-1);
    else
        return n;


}
