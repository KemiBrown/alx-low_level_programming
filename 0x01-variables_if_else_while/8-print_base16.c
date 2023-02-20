#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Description: a program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

