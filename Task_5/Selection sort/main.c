#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;

    printf("Enter a number of elements:\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements:\n");
    for(int i=0 ; i<n ; i++){
        printf("Array[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }


    //Selection sorting
    for(int i=0 ; i<n ; i++)
        for(int j=i ; j<n ; j++)
            if(arr[i] > arr[j]){

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }


    printf("\nSorted Array:\n");
    for(int i=0 ; i<n ; i++)
        printf("Array[%d] = %d\n",i+1,arr[i]);


    return 0;
}
