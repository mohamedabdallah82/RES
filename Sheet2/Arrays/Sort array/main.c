#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;

    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements:\n");
    for (int i=0 ; i<n ; i++){
        printf("Arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i=0 ; i<n ; i++)
        for (int j=i+1 ; j<n ; j++){

            if(arr[i] >= arr[j]){

                arr[i] += arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] -= arr[j];

            }

    }

    printf("Elements in ascending order:\n");

    for (int i=0 ; i<n ; i++)
        printf("Arr[%d] = %d\n",i+1,arr[i]);

    return 0;
}
