#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1=0,n2=0,n3=0,max=0;

    printf("Enter 1st number:\n");
    scanf("%f",&n1);
    printf("Enter 2nd number:\n");
    scanf("%f",&n2);
    printf("Enter 3rd number:\n");
    scanf("%f",&n3);

    max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

    printf("Largest number of %.2f,%.2f,%.2f is %.2f\n",n1,n2,n3,max);
    return 0;

}
