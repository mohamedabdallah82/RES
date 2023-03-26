#include <stdio.h>
#include <stdlib.h>

int arr[1000]= {0};

int main(void)
{
    int n = 0;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++)
        printf("fib(%d) = %d\n", i, fibonacci(i));


}


int fibonacci(int n)
{
    if (n < 2)
        return n;

    if (arr[n] != 0)
        return arr[n];

    else
        arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return arr[n];
}
