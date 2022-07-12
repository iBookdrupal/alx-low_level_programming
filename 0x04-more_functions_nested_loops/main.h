#ifndef _MAIN_H_
#define _MAIN_H_

/**
*_isupper -> Check for upper case
*@c: argument c
* Return: always 0
*/
int _isupper(int c);

/**
*_isdigit -> check for digit numbers
*@c: argument c
* Return: always 0
*/
int _isdigit(int c);

/**
*mul -> multiply two numbers a and b
* @a: argument 1
* @b: argument 2
* Return: always 0
*/
int mul(int a, int b);

/**
* print_numbers -> print numbers from 0 to 9
*/
void print_numbers(void);

/**
* _putchar - write character c to standard output
* @c: parameter, character to check
* Return: 0 or 1
*/

int _putchar(char c);

/**
* print_most_numbers -> print most numbers
*/
void print_most_numbers(void);

/**
* more_numbers -> display numbers with exclusion
*/
void more_numbers(void);

/**
* print_line - printing lines
* @n: argument to hold the value
*/
void print_line(int n);

/**
* print_diagonal -> printing diagonal
* @n: argument
*/
void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

#endif

