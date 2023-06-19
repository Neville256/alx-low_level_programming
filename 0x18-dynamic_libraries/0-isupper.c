#include "main.h"
/**
* _isupper – checks uppercase letters
*@c: The character to be checked
*Return: 1 for upper letter or 0 for any else
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
