#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program will generate random passwords for 101-crackme program
 * Return: 0 for success
 */
int main(void)
{
	int pwd[100];
	int a, sum, b;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pwd[a] = rand() % 78;
		sum = sum + (pwd[a] + '0');
		putchar(pwd[a] + '0');
		if ((2771 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum = sum + b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
