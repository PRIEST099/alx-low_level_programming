#include "main.h"

/**
 * counter - helps to find the length of a string
 * @s: parameter string
 * Return: length
 */

int counter(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + counter(s + 1));
}

/**
 * palindrome_helper - checks if a string is a parindlome
 * @s: parameter string to check
 * @start: parameter of where to start checking from left
 * @end: parameter to start to check from right
 * Return: boolean condition
 */

int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] == s[end])
		return (palindrome_helper(s, start + 1, end - 1));
	else
		return (0);
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: parameter string to check
 * Author: Ahadi
 * Return: boolean condition
 */

int is_palindrome(char *s)
{
	int len = counter(s) - 1;

	if (*s == '\0')
		return (1);

	return (palindrome_helper(s, 0, len));
}
