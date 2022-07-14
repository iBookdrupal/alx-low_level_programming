#ifndef _MAIN_H_
#define _MAIN_H_

/**
* _strcat - concatenates two strings
* @dest: destination to copy the string
* @src: another string to concatenates
*/

char *_strcat(char *dest, char *src);

int _putchar(char c);

/**
* _strncat - concatenates two strings
* @dest: destination to copy the string
* @src: another string to concatenates
* @n: size in bytes
*/
char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

#endif
