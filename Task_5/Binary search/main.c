#include <stdio.h>
#include <stdlib.h>

int main()
{
    int element = 0;

    int arr[] = {1,2,3,4,5,6,7,8,9};

    int n = *(&arr + 1) - arr; // using pointer arithmetic to get size of array.
    int start = 0,end = n - 1;

    printf("Enter element you want to search:\n");
    scanf("%d",&element);

    while (start <= end){

            int middle = start + (end - start) / 2;

            if (arr[middle] == element){

                printf("\n%d is %d element",element,middle+1);
                return 0;

            }

            else if(arr[middle] > element)
                end = middle - 1;

            else if(arr[middle] < element)
                start = middle + 1;

        }

    printf("\nElement not found in the array!");

    return 0;
}
