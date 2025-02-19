#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putchar_str[] = "_putchar";
	int i = 0;

	while (putchar_str[i] != '\0')
	{
		putchar(putchar_str[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
