#ifndef _MAIN_H_
#define _MAIN_H_
/**
* reset_to_98 - reseting
* @n: parameter passed
*/
void reset_to_98(int *n);


/**
* swap_int - swapping integers
* @a: parameter a passed
* @b: parameter b passed
*/
void swap_int(int *a, int *b);

/**
*_strlen - string length
*@s: parameter string s
* Return: 0 always (success)
*/
int _strlen(char *s);


/**
*_puts - string length
*@str: parameter string str
* Return: 0 always (success)
*/
void _puts(char *str);

int _putchar(char c);

void print_rev(char *s);


void puts2(char *str);

void rev_string(char *s);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

/**
*_atoi - convert from string to int
*@s: parameter string to convert
* Return: 0 always (success)
*/

int _atoi(char *s);
#endif
