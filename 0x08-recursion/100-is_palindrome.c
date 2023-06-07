#include "main.h"

/**
 * is_palindrome - function that return 1 if a string is plaindrom`:wq
 * e else 0.
 * @s: string to check
 *
 * Return: 1 if string is palindrome else 0 if not.
 */
int is_palindrome(char *s)
{
	int start, end;

	start = 0;
	end = _strlen_recursion(s) - 1;
	return (palindrome(s, start, end));
}
/**
 * palindrome - checks if a string is a palindrone
 * @s: string to check
 * @start: int type
 * @end: int type
 * Return: 1 if palindrone
 */
int palindrome(char *s, int start, int end)
{
	if (start > end)
		return (1);
	if (s[start] == s[end])
		return (palindrome(s, start + 1, end -1));
	return (0);
}
/**
 * _srtlen_recursion - checks the lenght of string
 * @s: string to check
 * Return: lenght of string checked
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
