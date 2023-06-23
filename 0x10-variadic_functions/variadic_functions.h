#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

/**
 *struct token - struct for token
 *
 * @token: format token
 * @q: the function associated
 */
typedef struct token
{
	char *token;
	void (*q)(char *, va_list);
} token_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
