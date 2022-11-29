#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> //C¾ð¾î


void main()
{
    char input[1000];
    int count = 0;

    printf("Input> ");
    gets_s(input, sizeof(input));
    while (input[count]) {
        if (isupper(input[count])) {
            input[count] = tolower(input[count]);
        }
        else if (islower(input[count])) {
            input[count] = toupper(input[count]);
        }
        count++;
    }

    printf("Output> %s", input);
}