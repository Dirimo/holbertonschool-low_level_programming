#include <stdlib.h>
#include"main.h"

/** @Prototype: char *_strdup(char *str);
 *  _strdup function returns a pointer 
 *  to a new string wich is a duplicate of the string
 * Memory fot the new string is obtained with malloc 
 * and be freed with @free
 */
char *_strdup(char *str)
{
	if (str == NULL){
		return(NULL);
	}

	int len = 0;
	while (str[len] != '\0'){
		len++;

	}

	char *new_str == (char*)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL){ 	
		return NULL;

	}

	for (int i = 0; i <= len; i++) {
		new_str[i] = str[i];
	}

	return new_str;



}

