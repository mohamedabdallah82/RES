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


    //Bubble sorting
    for(int j=0 ; j<n ; j++)
        for(int i=0 ; i<n-1 ; i++)
            if(arr[i] > arr[i+1]){

                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

            }



    printf("\nSorted Array:\n");
    for(int i=0 ; i<n ; i++)
        printf("Array[%d] = %d\n",i+1,arr[i]);

    return 0;
}
