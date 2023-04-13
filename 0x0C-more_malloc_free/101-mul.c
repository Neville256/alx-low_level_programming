#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - a non-digit checks for contained string
 * @s: evaluate the string
 *
 * Return: 0 if a non-digit found, 1 otherwise
 */
int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * _strlen - string lenght is returned
 * @s: evaluate string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int u = 0;

	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}

/**
 * errors - error handled for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - two positive numbers multiplied
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, y, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (y = 0; y <= len1 + len2; y++)
		result[y] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (y = 0; y < len - 1; y++)
	{
		if (result[y])
			a = 1;
		if (a)
			_putchar(result[y] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
