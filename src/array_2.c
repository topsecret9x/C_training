#include <stdio.h>
#include <array_2.h>

int store_and_print_Array_2D()
{
    int arr[3][3];
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Please input array element [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("The matrix is: \n");
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("[%d][%d]=%d\t", i, j, arr[i][j]);
        }
        printf("\n");
    }
}