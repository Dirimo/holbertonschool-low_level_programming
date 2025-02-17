#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet[53];
int i;
/* Fill the array with lowercase and uppercase alphabets */
for (i = 0; i < 26; i++)
{
alphabet[i] = 'a' + i;
alphabet[i + 26] = 'A' + i;
}
alphabet[52] = '\n'; /* Add newline character at the end */
/* Print the array using putchar */
for (i = 0; i < 53; i++)
{
putchar(alphabet[i]);
}
return (0);
}
