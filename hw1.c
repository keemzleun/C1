#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int result_and, result_or, result_xor;
	int num1, num2;

	printf("input two integers: ");
	scanf("%d %d", &num1, &num2);

	result_and = num1 & num2;
	result_or = num1 | num2;
	result_xor = num1 ^ num2;

	printf("%d & %d = %d \n", num1, num2, result_and);
	printf("%d | %d = %d \n", num1, num2, result_or);
	printf("%d ^ %d = %d \n", num1, num2, result_xor);

	return 0;

}