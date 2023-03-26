#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,element=0;

    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements:\n");
    for (int i=0 ; i<n ; i++){
        printf("Arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }


    printf("Enter number of element you want to insert:\n");
    scanf("%d",&element);

    int newArr[n+1];

    for (int i=0 ; i<n ; i++){
        newArr[i] = arr[i];
    }

    newArr[n] = element;

    printf("Array with insert element:\n");
    for (int i=0 ; i<n ; i++)
        printf("newArr[%d] = %d\n",i+1,newArr[i]);


    return 0;
}
