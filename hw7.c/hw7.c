#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void swapArray(int *p, int *q, int size)
{
	int i, temp;
	for (i = 0; i < size; i++)
	{
		temp = *(p + i);
		*(p + i) = *(q + i);
		*(q + i) = temp;
	}
}
void printArray(int* p, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", *(p + i));
}
int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	printf("\narr1:");
	printArray(arr1, 6);
	printf("\narr2:");
	printArray(arr2, 6);
	printf("\n\nafter swap");
	swapArray(arr1, arr2, 6);
	printf("\narr1:");
	printArray(arr1, 6);
	printf("\narr2:");
	printArray(arr2, 6);


}