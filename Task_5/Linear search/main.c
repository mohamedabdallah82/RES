#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0,element = 0,count = 0;

    printf("Enter a number of elements:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0 ; i<n ; i++){
        printf("Array[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter element you want to search:\n");
    scanf("%d",&element);

    for (int i=0 ; i<n ; i++){

        if (arr[i] == element){
            if(count++ == 0)
                printf("%d is the %d",element,i+1);
            else
                printf(",%d",i+1);
        }

    }

    if (count==0)
        printf("Error!\n%d is not found in the array",element);
    else
        printf(" element in the array\n");

    return 0;
}
