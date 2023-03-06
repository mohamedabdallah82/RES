#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prime = 2 , num = 0;
        printf("Enter a number: ");
        scanf("%d",&num);
        printf("Factorials of a number %d is:\n",num);
        while (num != 1){
            if (num % prime == 0){
                printf("%d\n",prime);
                num /= prime;
            }
            else
                prime++;
        }
    return 0;
}
