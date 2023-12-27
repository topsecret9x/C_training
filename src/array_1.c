#include <stdio.h>
#include <array_1.h>

int store_and_print_Array()
{
    int arr[10];
    for (int i=0; i<10; i++)
    {
        printf("Please input array element number %d\n", i+1);
        scanf("%d",&arr[i]);
    }
    for (int j=0; j<10; j++)
    {
        printf("%d ", arr[j]);  
    }
    printf("\n");
    return 0;
}