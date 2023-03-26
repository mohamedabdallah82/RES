#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;

    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    int freq[n];

    printf("Enter elements:\n");
    for (int i=0 ; i<n ; i++){
        printf("Arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i=0 ; i<n ; i++){

        int count = 0;

        for (int j=i ; j<n ; j++){
            if(arr[i] == arr[j])
                count++;

        freq[i] = count;
        }

        for (int k=i-1 ; k>=0 ; k--)
        {
            if (arr[i] == arr[k])
                freq[i] = 0;
        }


        if (freq[i] != 0)
            printf("Frequency of %d = %d\n",arr[i],freq[i]);


    }


    return 0;
}
