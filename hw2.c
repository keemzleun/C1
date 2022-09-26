#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double km;
	double miles;

	printf("Please enter kilometers: ");
	scanf("%lf", &km);

	miles = km / 1.609;

	printf("%.1f km is equal to %.1f miles.\n", km, miles);
	return 0;
}