#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n = 0 , sum = 0;

        printf("Enter the order of matrix:\n");
        scanf("%d",&n);

        int matrix [n][n];

        printf("Enter elements of matrix:\n");
        for (int i = 0 ; i<n ; i++)
            for (int j = 0 ; j<n ; j++){

                printf("Matrix[%d][%d] = ",i+1,j+1);
                scanf("%d",&matrix [i][j]);

            }


        for (int i = 0 ; i<n ; i++)
            for (int j = 0 ; j<n ; j++)
                if (i == j)
                    sum += matrix[i][j];

        printf("Sum of diagonal of matrix = %d",sum);

    return 0;
}
