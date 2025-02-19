#include <unistd.h>

/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putchar_str[] = "_putchar\n"; // Include newline in the string
	ssize_t len = sizeof(putchar_str) - 1; // Length without null terminator

	write(1, putchar_str, len); // Write to standard output (file descriptor 1)

	return (0);
}
