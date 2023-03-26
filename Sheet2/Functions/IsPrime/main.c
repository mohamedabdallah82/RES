#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    IsPrime(n);
    return 0;
}

void IsPrime(int n)
{
    int count;

    for (int i = 2 ; i < n ; i++)
        if (n % i == 0){
            printf("%d is not prime number",n);
            count++;
            break;
        }

    if(count == 0)
        printf("%d is prime number",n);

}
