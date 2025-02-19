#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 *
 * Description: This function iterates through the lowercase letters
 *              from 'a' to 'z' and prints each one using `putchar`.
 *              After printing all letters, it prints a new line.
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }
    putchar('\n');
}

/**
 * main - Entry point of the program.
 *
 * Description: Calls the `print_alphabet` function to print the alphabet.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    print_alphabet();
    return (0);
}
