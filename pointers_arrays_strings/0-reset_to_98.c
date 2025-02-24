#include <stdio.h>
#include "main.h"

int main(void) {
    int my_number = 42;
    int *ptr = &my_number;  // ptr now points to my_number

    printf("Before: my_number = %d\n", my_number); // Output: Before: my_number = 42

    reset_to_98(ptr);  // Call the function, passing the pointer

    printf("After: my_number = %d\n", my_number);  // Output: After: my_number = 98

    return (0);
}
