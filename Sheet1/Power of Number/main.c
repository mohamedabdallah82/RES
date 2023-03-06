#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num = 0.0,result = 1.0;
    int power = 0;
    printf("Please enter a number:\n");
    scanf("%f",&num);
    printf("Please enter power:\n");
    scanf("%d",&power);
    //with coding

    for (int i=0 ; i<power ; i++)
        result*=num;
    printf("%.2f power of %d = %.3f",num,power,result);

    /*or with func.(power var. can be float)
    printf("%.2f power of %d = %.3f",num,power,(pow(num,power)));
    */
    return 0;
}
