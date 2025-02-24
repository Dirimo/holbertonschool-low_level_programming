#include "main.h"

/**
 * write the function the takes a pointer to an int as
 * parameter and updates the value it points to 
 * use prototype  void reset_to_98(int *n);
 *
 */

void reset_to_98(int *n);
{
	int n;

    	n = 98;
	printf("n=%d\n", n);
 	reset_to_98(&n);
	printf("n=%d\n", n);
    
	return (0);
}
