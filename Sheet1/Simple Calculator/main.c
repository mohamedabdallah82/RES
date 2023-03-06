#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num_1=0.0 , num_2=0.0;
    char operation;

    printf("Enter 1st number: ");
    scanf("%f",&num_1);
    printf("Select your operation (+,-,*,/): ");
    scanf("%s",&operation);
    printf("Enter 2nd number: ");
    scanf("%f",&num_2);

    switch (operation)
    {
    case '+' :
        printf("%.2f + %.2f = %.2f",num_1,num_2,num_1+num_2);
        break;
    case '-' :
        printf("%.2f - %.2f = %.2f",num_1,num_2,num_1-num_2);
        break;
    case '*' :
        printf("%.2f * %.2f = %.3f",num_1,num_2,num_1*num_2);
        break;
    case '/' :
        printf("%.2f / %.2f = %f",num_1,num_2,num_1/num_2);
        break;
    default:
        printf("Operation wrong entry!");
        break;
    }
    return 0;
}
