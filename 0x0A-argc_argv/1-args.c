#include <stdio.h>
#include "main.h"

/**
  * main - runs the number of prints passed in an argument on the program
  *@argc: number of arguments
  *@argv: array of arguments
  *
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
