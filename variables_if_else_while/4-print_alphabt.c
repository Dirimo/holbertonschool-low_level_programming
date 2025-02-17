#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, excluding 'q' and 'e',
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
/* Print lowercase alphabet excluding 'q' and 'e' */
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n'); /* Add newline character at the end */
return (0);
}
