#include <stdlib.h>
#include "dog.h"

/**
*free_dog - free dog memory
*@d: free pointer dog
*/

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}


