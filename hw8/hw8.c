#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	int data[5] = { 0 };
	int sum = 0;
	double average, variance = 0;
	double std_deviation = 0;

	// 실수 입력 받기
	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++)
	{
		scanf(" %d", &data[i]);
	}

	for (i = 0; i < 5; i++)
	{
		sum = sum + data[i];
	}
	average = sum / 5;

	for (i = 0; i < 5; i++)
	{
		variance = variance + pow(data[i] - average, 2);
	}
	variance = variance / 5;

	std_deviation = sqrt(variance);
	printf("Standard Deviation = %.3lf", std_deviation);
	return 0;
}
