#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yr = 0;
    printf("Enter a year:\n");
    scanf("%d",& yr);
    if ( (yr % 400 == 0) || ( ( yr % 4 == 0 ) && ( yr % 100 != 0) ) )
            printf("%d is Leap Year",yr);
        else
            printf("%d is not Leap Year",yr);
    return 0;
}
