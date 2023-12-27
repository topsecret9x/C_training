#include <stdio.h>
#include <array_39.h>

int shiftArrPos(int *arr, int arrSize) 
{
    int i, temp;
    temp = arr[0];
    for(i = 0; i < arrSize-1; i++) 
    {
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
    return 0;
}

int arrRotate(int *arr, int arrSize, int rotFrom)
{
    int i;
    for(i = 0; i < rotFrom; i++)
	{
        shiftArrPos(arr, arrSize);
    }
    return 0;
}

int rotateArr()
{
    int arr[] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
    int pos;
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Please input the position you want to rotate: ");
    scanf("%d", &pos);

    while ((pos<0)||(pos>n))
    {
        printf("Wrong input, please input the position you want to rotate again: ");
        scanf("%d", &pos);
    }

    arrRotate(arr, n, pos);

    printf("After rotating from position %d the array is: \n", pos);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
