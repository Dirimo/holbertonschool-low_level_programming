#include <unistd.h>

int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int length = 0;

    while (message[length] != '\0')
        length++;

    write(2, message, length);

    return 1;
}
