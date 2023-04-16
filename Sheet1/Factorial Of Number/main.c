#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0,result=1;
        printf("Enter a number: ");
        scanf("%d",&num);
        printf("Factorials of a number %d is: ",num);
        while (num > 1)
            result*=num--;
        printf("%d",result);
    return 0;
}
