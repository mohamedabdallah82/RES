#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main()
{
    int arr[SIZE];
    int size=0,element=0,pos=0;

    printf("Enter number of elements:\n");
    scanf("%d",&size);

    printf("Enter elements:\n");
    for (int i=0 ; i<size ; i++){
        printf("Arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }


    printf("Enter element you want to insert:\n");
    scanf("%d",&element);

    printf("Enter the element position:\n");
    scanf("%d",&pos);

    if(pos > size+1 || pos <= 0)
        printf("Invalid position! Please enter position between 1 to %d", size+1);
    else{
        for(int i=size; i>=pos; i--)
            arr[i] = arr[i-1];

        arr[pos-1] = element;
        size++;
        printf("Array with insert element:\n");
        for (int i=0 ; i<size ; i++)
            printf("Arr[%d] = %d\n",i+1,arr[i]);
    }

    return 0;
}
