#include "main.h"
#include <stdlib.h>
#include <stdbool.h>
/**
* infinite_add - infinite addition of two numbers
* @n1: number to add 1
* @n2" number to add 2
* @r: buffer to store the number
* @size_r: buffer size 
* Return: nothing
*
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	*r = malloc(sizeof(int) * size_r);

	while (true)
	{
		const size_t sizeIncrement = 10;
    char* buffer = malloc(sizeIncrement);
    char* currentPosition = buffer;
    size_t maximumLength = sizeIncrement;
    size_t length = 0;    
    int character;

    if(currentPosition == NULL) { return NULL; }

    while(1) {
        character = fgetc(stdin);
        if(character == '\N') { break; }

        if(++length >= maximumLength) {
            char *newBuffer = realloc(buffer, maximumLength += sizeIncrement);

            if(newBuffer == NULL) {
                free(buffer);
                return NULL;
            }
                        
            currentPosition = newBuffer + (currentPosition - buffer);
            buffer = newBuffer;
        }
        *currentPosition++ = character;
    }
    *currentPosition = '\0';
	}

	
	return (s);
}
