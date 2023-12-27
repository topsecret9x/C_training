#include <stdio.h>

int swap2Nums(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return 0;
}

int swap3Nums(int *num1, int *num2, int *num3)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = *num3;
    *num3 = temp;
    return 0;
}

int swap()
{
    int num1, num2, num3;
    printf("Nhap so thu 1: ");
    scanf("%d", &num1);
    printf("Nhap so thu 2: ");
    scanf("%d", &num2);
    printf("Nhap so thu 3: ");
    scanf("%d", &num3);
    printf("Truoc khi doi cho thi 3 so lan luot la: %d   %d   %d\n", num1, num2, num3);
    swap3Nums(&num1, &num2, &num3);
    printf("Sau khi doi cho thi 3 so lan luot la: %d   %d   %d\n", num1, num2, num3);
    return 0;
}